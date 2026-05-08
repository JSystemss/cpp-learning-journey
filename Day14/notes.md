# Day 14 — Virtual Functions, Pure Virtual Functions, This Keyword

## What I Learned (Quiz Me)

What does `virtual` do on a function?
What happens without `virtual` when you call a function through a base class pointer?
What is a pure virtual function?
What makes a class abstract?
Can you create an instance of an abstract class?
What is `this` inside a member function?
When would you use `this->`?

## Key Concepts (Answers)

`virtual` tells C++ to look at the actual object when deciding which function to call, not the pointer type. Without it C++ trusts the pointer type and calls the base class version always.

Without `virtual` — `Entity* e = new Player()` calling `e->GetName()` calls Entity's version because e is an `Entity*` pointer. C++ looks at the pointer type, not the real object.

A pure virtual function has `= 0` instead of a body. It has no implementation in the base class. Every derived class must implement it or the compiler will error.

A class becomes abstract when it has at least one pure virtual function. Abstract means it is a blueprint only — you define the interface, derived classes provide the implementation.

No. You cannot create an instance of an abstract class directly. It is incomplete — it has functions with no body. You must derive from it and implement all pure virtual functions first.

`this` is a pointer to the current object the function was called on. When you call `car1.Drive(30)`, inside `Drive`, `this` points to `car1`.

Use `this->` when your parameter name is the same as a member variable name. `this->health` means the object's health. `health` alone means the parameter. Without `this->` the compiler gets confused.

## My Understanding

Without `virtual` C++ looks at the pointer type to decide which function to run. With `virtual` it looks at the actual object. So `Entity* e = new Player()` calling `e->GetName()` — without virtual gives "Entity", with virtual gives the Player's actual name.

Pure virtual functions force every derived class to implement the function. The base class is just a contract — it says "you must have this function" without providing an implementation. This is called an interface or abstract class.

`this` is the hidden pointer C++ secretly passes into every member function. It points to the object the function was called on. I use `this->` to distinguish member variables from parameters when they share the same name.

## Mistakes I Fixed

Put `const` before the return type instead of after the parentheses. Fixed — `int GetArea() const` not `int const GetArea()`. The `const` after `()` is what tells the compiler the function won't modify member variables.

Tried to delete the class name instead of the pointer variable. Fixed — always `delete ptr` not `delete ClassName`. The pointer holds the address. Delete follows that address to free the heap object.

## Key Insight

`virtual` and pure virtual solve different problems. `virtual` lets derived classes override behavior while still having a default. Pure virtual forces derived classes to provide their own implementation with no default. Use `virtual` when the base class has sensible default behavior. Use pure virtual when the base class has no meaningful default and every derived class must define its own version.

## My Takeaway

Virtual = look at the object not the pointer. Pure virtual = no body, must implement in derived class, makes class abstract. This = pointer to current object, use it when parameter names clash with member variable names.

## Summary

What I learned — virtual functions, pure virtual functions, abstract classes, the this keyword and this-> syntax.

What I built — Animal base class with virtual Sound function, Dog and Cat derived classes overriding Sound. Rectangle class using this-> in constructor to disambiguate parameter names from member variables.

What I can explain now — why virtual exists, what pure virtual does, what abstract class means, what this is and when to use this->.