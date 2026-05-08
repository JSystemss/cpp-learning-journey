# Day 15 — std::vector, Casting, const Review

## What I Learned (Quiz Me)

What is `std::vector` and how is it different from a regular array?
What does `push_back` do?
How do you loop through a vector?
What is `v.size()`?
What is casting?
What is the difference between C-style cast and `static_cast`?
What is `reinterpret_cast` used for?

## Key Concepts (Answers)

`std::vector` is a dynamic array that grows and shrinks automatically. A regular array has a fixed size decided at compile time — you can never add more elements than the size you declared. A vector has no fixed size — it resizes automatically as you add elements. You include it with `#include <vector>`.

`push_back` adds an element to the end of the vector. First element goes to index 0, each new one goes after the last.

Loop through a vector the same way as a regular array using index and `v.size()` as the boundary. `v.size()` returns how many elements are currently in the vector so you know when to stop.

Casting is converting one type to another. Like converting a `float` to an `int` — the decimal gets dropped.

C-style cast `(int)x` forces the conversion through without checking if it makes sense. `static_cast<int>(x)` does the same thing but the compiler verifies the conversion is valid. `static_cast` is safer because it catches incompatible conversions at compile time instead of silently producing wrong results.

`reinterpret_cast` takes raw bytes in memory and tells C++ to treat them as a specific type. Used when reading game memory — you get raw bytes back from `ReadProcessMemory` and cast them to the type you actually want like `float` for health or position values.

## My Understanding

A vector is just an array that handles its own size. I built a vector of player names, added 5 with push_back, printed the count with size(), and looped through all of them. This is exactly how I'll store enemy players in memory when building the Assault Cube external.

Casting converts types. `static_cast<int>(9.99f)` gives 9 — decimal dropped. This matters for game memory reading where raw bytes need to be cast into the right type to make sense.

## Mistakes I Fixed

Forgot `#include <vector>` — got red lines everywhere. Fixed by adding the include at the top. Every STL container needs its own include.

## Key Insight

`std::vector` is the foundation of how I'll track players in my aimbot. Unknown number of players on the server at runtime — can't use a fixed array. Vector grows as I find players in memory and shrinks when they disconnect. Loop through every frame, check positions, find closest enemy. That's ESP and aimbot foundation right there.

`reinterpret_cast` will be my most used cast when reading game memory. Raw bytes from `ReadProcessMemory` mean nothing until you cast them to the right type. Health is a float. Position is 3 floats. Team number is an int. Cast tells C++ how to interpret the bytes.

## My Takeaway

Vector = dynamic array, grows automatically, use push_back to add, size() to count, index to access. Casting = converting types, use static_cast for safety, reinterpret_cast for raw memory reads.

## Summary

What I learned — std::vector as a dynamic array, push_back, size(), looping through vectors, C-style cast vs static_cast, reinterpret_cast for game memory.

What I built — vector of player names with push_back, size print, and full loop. Cast demo converting double to int with static_cast.

What I can explain now — why vectors beat fixed arrays for unknown sizes, how push_back works, what casting is, why static_cast is safer, what reinterpret_cast does and why it matters for reading game memory.