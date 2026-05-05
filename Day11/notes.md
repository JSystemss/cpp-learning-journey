# Day 11 — ENUMS + Constructors

## What I Learned (Quiz Me)

When should you use an enum instead of regular variables?
What do enums actually store under the hood?
What are the two syntax rules for a constructor?
When does a constructor run?
What problem does a constructor solve?
What happens if you create an object without a constructor and forget to set a value?

## Key Concepts (Answers)

Use an enum when you have a fixed set of named options representing one thing — like directions, log levels, days of the week. If the value could be anything, use a regular variable.

Enums store integers under the hood. The names are just labels for those integers. North = 0, South = 1, etc. The compiler replaces the names with numbers.

Two syntax rules for a constructor — same name as the class, and no return type (not even void).

A constructor runs automatically the moment an object is created. You never call it manually.

A constructor guarantees the object starts with valid values every time. You cannot create the object without providing the values — the compiler forces you.

If you forget to set a value without a constructor you get garbage data — whatever random bytes were sitting in that memory location. This causes bugs that are almost impossible to track down.

## My Understanding

An enum is a cleaner safer way to use a fixed set of named options instead of raw numbers. If I see LevelWarning in code I know what it means. If I see 1 I have no idea. Enums make code readable and prevent invalid values.

A constructor is a special function that runs automatically when an object is created. It takes parameters and sets the member variables so the object always starts in a valid state. You cannot forget to set something because the compiler forces you to pass the values in.

## Mistakes I Fixed

Wrote the constructor but forgot to declare the member variables inside the struct. Fixed — member variables go at the top of the struct, then the constructor sets them.

Wrote the constructor but never assigned the parameters to the member variables inside it. The parameters came in but nothing got stored. Fixed — heath = h and speed = s inside the constructor body.

## Key Insight

A constructor makes invalid objects impossible. Without one you can create a Player and forget to set health and speed — garbage values, silent bugs. With a constructor the compiler refuses to let you create the object without providing valid values. That is a safety guarantee built into the type itself.

## My Takeaway

Enums — use them when choosing between a fixed list of named things. Constructors — use them to guarantee every object starts valid. Both make code safer and more readable.

## Summary

What I learned — ENUMS as named integer constants. Constructors as automatic initialization functions with same name as class and no return type.

What I built — Direction enum with if/else output. Player class with constructor setting health and speed.

What I can explain now — when to use an enum, what constructors do, why they exist, what happens without them.