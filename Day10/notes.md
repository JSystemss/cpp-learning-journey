# Day 10 — Static in C++ (Outside + Inside Classes)

## What I Learned (Quiz Me)

### Static Outside a Class
- What does `static` on a function or variable outside a class mean?
- What problem does it prevent?
- What is a translation unit?

### Static Inside a Class
- What does `static` on a member variable mean?
- How many copies of a static member variable exist across all objects?
- Why do you need to define a static variable outside the class?
- What does `static` on a method mean?
- Why can't a static method access non-static member variables?
- What is the correct way to access a static member variable or method?

### Public vs Private
- When should something be public?
- When should something be private?
- Can static variables be private?

## Key Concepts (Answers)

### Static Outside a Class
- Only that translation unit can see it. The linker cannot see it globally.
- Prevents duplicate symbol errors when two .cpp files have the same function name.
- One .cpp file after the preprocessor runs. Each .cpp file = one translation unit = one .obj file.

### Static Inside a Class
- One copy shared across ALL instances. Changing it from any object changes it for everyone.
- One copy. Always. No matter how many objects exist.
- Declaration inside the class says "it exists." Definition outside creates the actual memory. No object creation gives static variables memory automatically — you have to do it yourself. Without it you get "unresolved external symbol."
- Belongs to the class, not any specific object. No hidden object parameter. Can only access static data.
- A static method has no hidden object parameter so it doesn't know which object's data to access. Normal methods secretly get the object passed in — static methods don't.
- Through the class name using `::` — `Car::totalCars`, `Car::GetTotalCars()`. Never through an instance.

### Public vs Private
- Anything outside code needs to touch directly — functions called from main, variables set from main.
- Data you want to protect — force outside code to go through functions instead of touching data directly.
- Yes. Private = outside can't touch it directly. Static = one shared copy. They're separate concepts, both can apply to the same variable.

### Static Outside a Class
- `static` on a function or variable outside a class means only that translation unit can see it. The linker cannot see it globally.
- Prevents duplicate symbol errors when two files have the same function name.
- A translation unit = one .cpp file after the preprocessor runs. Each .cpp file compiles into one .obj file.

### Static Inside a Class
- A static member variable is shared across ALL instances of the class. There is only ONE copy in memory no matter how many objects exist. Changing it from any object changes it for everyone.
- One copy. Always. No matter how many objects you create.
- The declaration inside the class just says "this exists." The definition outside creates the actual memory. Static variables need both because no object creation gives them memory automatically. Without it the linker can't find the memory — "unresolved external symbol."
- A static method belongs to the class not any specific object. It has no hidden object parameter so it can only access static data.
- A static method has no hidden object parameter so it doesn't know which object's data to access. Normal methods secretly get the object passed in — static methods don't.
- Through the class name using `::` — `Car::totalCars`, `Car::GetTotalCars()`. Not through an instance.

### Public vs Private
- Public: anything outside code needs to touch directly — functions called from main, variables accessed from main.
- Private: data you want to protect — force outside code to go through functions instead of touching data directly.
- Yes. Static variables can be private. Private just means outside code can't access them directly. Static means one shared copy.

## My Understanding

- Static inside a class = one scoreboard for the whole class. Every player sees the same score.
- I built a Car class with `totalCars` tracking how many cars exist. All three cars share one `totalCars`. Calling `Car::GetTotalCars()` returns the real total.
- Static methods can't access non-static variables because they have no hidden object parameter — they don't know which object's data you mean.
- `Car::GetTotalCars` without `()` gives the memory address of the function itself. `Car::GetTotalCars()` with `()` calls it and returns the result.

## Mistakes I Fixed

- Forgot to define `static int totalCars` outside the class → got "unresolved external symbol" error. Fixed: added `int Car::totalCars = 0;` after the closing `};`
- Tried to access private `fuel` directly from main → blocked. Fixed: made it public for this task since main needed to touch it directly.
- Wrote `Car::GetTotalCars` without `()` → got a memory address instead of the value. Fixed: added `()` to actually call the function.

## Key Insight

- Static variables need two things: a declaration inside the class (`static int totalCars;`) AND a definition outside the class (`int Car::totalCars = 0;`). Declaration = "it exists." Definition = "here's its memory." No object creation gives static variables memory automatically — you have to do it yourself.
- The `::` operator means "look inside this scope." `Car::totalCars` = "totalCars that lives inside Car." Same as `std::cout` = "cout that lives inside std."
- A static method has no hidden object parameter. That's why it can't access non-static data — it genuinely doesn't know which object you mean.

## My Takeaway

- Static inside a class = shared data across all objects. Use it when you need one piece of information that belongs to the class itself, not any specific object. Static method = no hidden object, only use static data inside it.

## Summary

- What I learned: Static variables and methods inside classes. Public vs private. Scope resolution operator `::`. Why static variables need defining outside the class. Why static methods can't access non-static data.
- What I built: Player class tracking player count. Car class tracking total cars with Refuel functionality.
- What I can explain now: What static means inside a class, why you define static variables outside, why static methods can't access non-static data, when to use public vs private, difference between `GetTotalCars` and `GetTotalCars()`.