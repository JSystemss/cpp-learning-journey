# Day 9 — References + Classes + Member Functions (Locked In)

## What I Learned (Quiz Me)

### References

What does `&` do in a function parameter?

What happens to changes made inside a function WITHOUT `&`?

When would you use a copy instead of a reference?

### Classes + Member Functions
What is a class?

What is an object/instance?

Do two objects from the same class share data?

What is a member function?

Why don't member functions need `&` to modify their object?

### Constructors (intro)
When does a constructor run?

What problem does a constructor solve?

What are the two rules about constructor syntax?

## Key Concepts (Answers)

### References
`&` makes the parameter THE real variable, not a copy. Changes affect the original.

Without `&`, C++ copies the object. Changes happen on the copy. Copy dies when function ends. Original untouched.

Use a copy when you want to do math on something WITHOUT touching the original, then return the result.

### Classes + Member Functions
A class is a custom type that groups data and functions together.

An object/instance is a real one built from the class blueprint. Class = blueprint, object = real thing.

No. Each object has its own copy of the data. 1 class, many independent objects.

A function that lives inside a class. It can use the class's data directly.

Because C++ secretly gives the member function a reference to the object it was called on. The `&` is written invisibly.

### Constructors
The moment the object is created.

Guarantees the object starts with valid values every time. No garbage values, no forgetting to set something.

Same name as the class. No return type (not even void).

## My Understanding

References click now. `&` = the real thing. No `&` = a copy that dies. I proved this in code — `AddFuelCopy` left fuel at 50, `AddFuelReal` changed it to 70.

Member functions silently get a reference to their object. That's why I can write `fuel += amount` inside `Drive()` without needing `Car&`.

Constructors run automatically when an object is created. They're a safety layer — guarantee valid starting values every time.

## Mistakes I Fixed

Thought member functions needed `&` like outside functions do. Fixed: member functions get the reference invisibly from C++. You don't write it.

Wrote `x += x + 10` when I meant `x += 10`. Fixed: `+=` already means "add to self" — writing `x += x + 10` doubles x then adds 10.


## Key Insight

The `&` difference is visible in output. `AddFuelCopy` → fuel stays 50. `AddFuelReal` → fuel becomes 70. Same code, one character difference (`&`), completely different behavior. That one character is the difference between modifying real memory and modifying a throwaway copy.

## My Takeaway

References = real thing. No reference = copy. Member functions = reference handled invisibly. Constructors = guaranteed valid state at creation.

## Summary

What I learned: References fully locked. Classes, objects, member functions, and constructor intro.

What I built: Standalone reference demo, Weapon class with member functions, Car class proving copy vs reference in output.

What I can explain now: Why `&` matters, how member functions work without `&`, what a constructor does and when it runs.