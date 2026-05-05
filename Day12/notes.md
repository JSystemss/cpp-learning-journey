# Day 12 — ENUMS, Constructors, Destructors, Object Lifetime

## What I Learned (Quiz Me)

### ENUMS
When should you use an enum instead of a regular variable?
What do enums store under the hood?
Can you reassign an enum variable after setting it?
What happens if you try to set an enum variable to an invalid value?

### Constructors
When does a constructor run?
What are the two syntax rules for a constructor?
What problem does a constructor solve?
What happens if you create an object without a constructor and forget to set a value?

### Destructors
When does a destructor run?
What is the syntax for a destructor?
What is the most important use case for a destructor?
What happens if you have heap memory inside an object and no destructor?

### Object Lifetime + Scope
What happens to a stack object when it goes out of scope?
How can you use curly braces to control exactly when an object is destroyed?

## Key Concepts (Answers)

### ENUMS
Use an enum when you have a fixed set of named options. If the value could be anything use a regular variable. Example — directions, log levels, traffic lights.
Enums store integers under the hood. The names are just labels. North = 0, South = 1, etc.
Yes. You can reassign an enum variable at any time just like a regular variable.
The compiler won't allow it. That's the safety — you can only assign valid enum values.

### Constructors
A constructor runs automatically the moment an object is created. You never call it manually.
Same name as the class. No return type — not even void.
Guarantees the object starts with valid values. You cannot create the object without providing the values — the compiler forces you.
You get garbage data — whatever random bytes were sitting in that memory location. Silent bugs that are hard to track down.

### Destructors
A destructor runs automatically when an object is destroyed — when it goes out of scope on the stack or when you call delete on a heap object.
Same name as the class with a tilde in front. No return type. No parameters. Example — ~Entity()
Cleaning up heap memory that was allocated inside the object. If you don't delete it in the destructor it leaks every time the object is destroyed.
Memory leak. The object is gone but the heap memory it created stays stuck in memory forever until the program ends.

### Object Lifetime + Scope
When a stack object goes out of scope its destructor runs automatically and its memory is freed.
Wrap code in curly braces to create a scope. When execution hits the closing brace the object dies and the destructor runs immediately. This is used in real C++ to guarantee cleanup of resources like file handles and mutexes.

## My Understanding

An enum is a fixed set of named integers. I built a TrafficLight enum with Red, Yellow, Green and used if/else to print the right message. You can reassign enum variables but only to valid values — the compiler blocks garbage.

A constructor runs automatically when an object is created. I built multiple classes with constructors — Weapon, Car, OurKids — all created in one line with values guaranteed. No manual setting, no forgetting, no garbage.

A destructor runs automatically when an object is destroyed. I wrapped an Entity in a scope with curly braces and watched "Entity Created" then "Entity Destroyed" print in real time. The destructor ran the moment the scope ended — before cin.get() so I could actually see it.

The most important use of a destructor is cleaning up heap memory inside an object. Without it the heap memory leaks every time the object is destroyed.

## Mistakes I Fixed

Wrote the constructor assignment backwards — n = name instead of name = n. Fixed — member variable goes on the left, parameter goes on the right. You assign FROM the parameter INTO the member variable.

Only saw "Entity Created" and not "Entity Destroyed". Fixed — wrapped the Entity in a scope with curly braces so the destructor ran before cin.get() and I could see both messages.

## Key Insight

Curly braces control object lifetime on the stack. This is not just a trick — real C++ developers use scopes to guarantee cleanup of resources. When the scope ends the destructor runs automatically. No forgetting to clean up. No leaks. This is the foundation of RAII — Resource Acquisition Is Initialization — one of the most important patterns in C++. You will use this constantly.

## My Takeaway

Constructor — object born, setup runs automatically. Destructor — object dies, cleanup runs automatically. Scope — controls exactly when that happens. Heap memory inside objects must be deleted in the destructor or it leaks. These three concepts together are object lifetime.

## Summary

What I learned — ENUMS as named integer constants. Constructors as automatic initialization. Destructors as automatic cleanup. Scope controlling object lifetime.

What I built — TrafficLight enum with reassignment. Weapon, Car, OurKids classes with constructors. Entity class showing constructor and destructor firing in real time using a scope.

What I can explain now — when to use enums, how constructors work and why, how destructors work and why, what happens to stack objects when scope ends, why destructors matter for heap memory.