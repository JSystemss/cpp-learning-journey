# Day 13 — Inheritance in C++

## What I Learned (Quiz Me)

What is inheritance?
What problem does inheritance solve?
What is a base class and what is a derived class?
What is the syntax to inherit from a class?
Does a derived class get the base class member variables and functions?
Can you add new member variables and functions to a derived class on top of what it inherited?

## Key Concepts (Answers)

Inheritance is when a derived class takes all the member variables and functions from a base class and can add its own on top. The derived class gets everything the base class has automatically.

It solves code repetition. Without inheritance you would copy the same variables and functions into every class that needs them. With inheritance you define shared data once in a base class and every derived class gets it for free.

The base class is the parent — it holds shared data and behavior. The derived class is the child — it inherits everything from the base and adds its own unique data and behavior on top.

Derived class name, then colon, then public, then the base class name. Example — class Player : public Entity

Yes. A derived class automatically gets every public member variable and function from the base class.

Yes. That is the whole point. The derived class starts with everything the base has and you add whatever is unique to that specific class on top.

## My Understanding

Inheritance lets me define shared data once and reuse it across multiple classes. Instead of writing health and speed in both Player and Enemy I put them in a base class called Entity. Both Player and Enemy inherit from Entity and get health and speed automatically. Then I add what is unique to each — Player gets a name and Attack, Enemy gets damage and Chase.

I built a mini game scene from scratch. Entity is the base class with health, position, and speed. Player and Enemy both inherit from Entity. I called Move on both since they inherited it. I added a destructor to Enemy that prints how much damage was dealt when the object is destroyed — and used a scoped block so I could see it fire before the program ended.

## Mistakes I Fixed

Created a local variable called damage in main instead of setting e1.damage on the object. The destructor was reading the uninitialized member variable which gave garbage output. Fixed by setting e1.damage = 5.5 directly on the object.

## Key Insight

Inheritance is not just about clean code — it is about modeling reality. A Player IS an Entity. An Enemy IS an Entity. They share the same foundation but have their own unique behavior on top. This is exactly how game engines structure their objects. Every entity in a game inherits from a base class that holds shared data like position, health, and speed.

## My Takeaway

Define shared data once in a base class. Inherit it everywhere you need it. Add only what is unique to each derived class. Never repeat yourself.

## Summary

What I learned — inheritance, base classes, derived classes, syntax for inheriting, how derived classes extend base classes.

What I built — a mini game scene with an Entity base class and Player and Enemy derived classes. Each inherited Move from Entity and added their own unique functions. Enemy destructor printed damage dealt when the object went out of scope.

What I can explain now — what inheritance is, why it exists, how to write it, how derived classes get base class data automatically, and how to extend a base class with new behavior.