# Day 8 — Classes & Member Functions

## What I Learned (Quiz Me)

### Classes
What is a class in C++?

What is the difference between a class and an object/instance?

If I create 3 objects from the same class, do they share data or have their own copies?

How do I access a member variable of an object?

### Member Functions
-What is a member function?

Why don't member functions need a reference (&) parameter to modify their object?

What does `void` mean as a return type?

### References (in progress)
What does `&` do in a function parameter?
What is the difference between passing by value and passing by reference?

## Key Concepts (Answers)

### Classes
A class is a custom data type that groups data and functions together. Like building your own `int`, but it can hold whatever you want.

A class is the blueprint. An object/instance is an actual one built from that blueprint. Class = blueprint, object = real built thing.

Each object has its OWN copy of the data. They don't share. 1 class, many independent objects.

Use the dot operator: `object.memberVariable`. Example: `car1.speed`.

### Member Functions
A function that lives inside a class. It can use the class's data directly without needing parameters for it.

Because C++ secretly gives the function a reference to the object it was called on. You don't have to write `&` yourself — it's automatic.

`void` means the function returns nothing. It just does its job and ends.

### References
`&` makes the parameter a "nickname" for the original variable instead of a copy. Modifying it modifies the real one.

Pass by value = function gets a copy, original is untouched. Pass by reference = function uses the original, changes affect it.

## My Understanding

A class is just a custom type. Like inventing my own `int` that can hold multiple values bundled together.

I built a Phone class with `battery`, `storage`, and `isLocked`. I made 3 phones (iPhone, Samsung, GooglePixel), each with their own data.

I built a Car class with `StartEngine()` and `Drive()` member functions inside it. Calling `car1.Drive(30)` directly modifies 

car1's fuel without needing a reference parameter.

I'm still wiring references properly into my brain — I get the nickname idea but the syntax inside function parameters needs more reps.

## Mistakes I Fixed

Tried `LOG(car1)` and got `no operator "<<" matches these operands`. Fixed: `cout` doesn't know how to print custom types — I had to print each member individually.

Wrote `iLocked = true;` (a bool) when `iLocked` was a `std::string`. Fixed: changed it to a proper string like `"iPhone is locked"` to match the other branches.

Got confused thinking I needed to return `engineOn` from `StartEngine()`. Realized: a member function modifies the object directly, no return needed.

## Key Insight

The biggest mental shift today: **member functions silently get a reference to the object they're called on.** That's why I can write `fuel -= distance;` inside `Drive()` without `Car&`. C++ writes the reference for me, invisibly. That's part of why classes are so clean — they remove a lot of boilerplate.

## My Takeaway

Classes are custom types. Objects are real instances of those types. Member functions are functions that automatically know which object they belong to.

## Summary

What I learned: Classes, objects/instances, member variables, 
member functions, why classes don't need explicit references.

What I built: A Phone class with 3 separate phone instances, each with their own data and styled output. A Car class with `StartEngine()` and `Drive()` member functions.

What I can explain now: What a class is, what an instance is, why each object has its own data, how member functions work, and why they don't need `&` parameters.