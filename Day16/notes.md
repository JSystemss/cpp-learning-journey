# Day 16 — Visual Studio Debugger + Windows API Intro

## What I Learned (Quiz Me)

What is a breakpoint and how do you set one in Visual Studio?
What does F5 do in Visual Studio?
What is the difference between F10 and F11?
What is the Locals window?
What is the Watch window?
Why is the debugger useful — what problem does it solve?
What is a HANDLE in Windows API?
What is the difference between HWND and HANDLE?
What is a process ID (DWORD pid)?
What does ReadProcessMemory do and what are its parameters?
What is the chain of steps to read memory from another process?

## Key Concepts (Answers)

A breakpoint pauses program execution at a specific line so you can inspect variables and step through code. Set one by clicking the grey margin to the left of a line number in Visual Studio. A red dot appears.

F5 runs the program in debug mode. Execution pauses when it hits a breakpoint.

F10 steps over — executes the current line and moves to the next one. If the line contains a function call it executes the whole function without going inside. F11 steps into — if the line contains a function call it takes you inside that function so you can step through it line by line.

The Locals window shows all variables currently in scope and their live values as you step through code.

The Watch window lets you manually type any variable name or expression and track its value live as you step through code.

The debugger lets you see exactly what your variables contain at any point in execution and which code path your program takes. Instead of guessing why something is wrong you watch it happen line by line. Essential for finding bugs.

A HANDLE is a Windows API type representing a reference to a resource — a process, file, thread, etc. Like a key that lets you interact with that resource.

HWND is specifically a handle to a window. HANDLE is the generic type for any resource handle. HWND is just a more specific version used only for windows.

A process ID is a unique number Windows assigns to every running program. Stored as DWORD — an unsigned 32-bit integer. Every program running on your PC has its own process ID.

ReadProcessMemory reads bytes from another process's memory into your own variable. Parameters — process handle, memory address to read from, where to store the result, how many bytes to read, optional bytes-read output.

Window title → FindWindowA → window handle → GetWindowThreadProcessId → process ID → OpenProcess → process handle → ReadProcessMemory → value from memory.

## My Understanding

The debugger is how real developers find bugs. Set a breakpoint, run with F5, step through with F10 and F11, watch variables change live in the Locals and Watch windows. I stepped inside GetArea() using F11 and watched the function execute line by line.

Windows API memory reading follows a chain. You start with what you know — the window title — and work your way to the process handle which gives you access to memory. Each step gives you what you need for the next step.

ReadProcessMemory takes your process handle, a memory address cast to LPCVOID, the address of your destination variable, the size in bytes, and NULL for the optional output. It reads bytes from the game process and writes them into your variable.

## Mistakes I Fixed

Had the breakpoint excluded so the debugger wasn't pausing. Fixed by clicking the grey margin properly to set the red dot breakpoint.

## Key Insight

The debugger is not optional — it is how you find bugs that would take hours to find by reading code. Every professional C++ developer uses it constantly. Knowing F10, F11, Locals, and Watch is the minimum. This is also directly relevant to the passion project — understanding memory addresses and values in the debugger maps directly to reading game memory.

## My Takeaway

Breakpoint + F5 to pause. F10 to step over. F11 to step into. Locals to see everything. Watch to track specifics. Windows API memory reading is a chain — window handle to process ID to process handle to memory read.

## Summary

What I learned — Visual Studio debugger basics, breakpoints, stepping, Locals and Watch windows. Windows API intro — HWND, HANDLE, DWORD, FindWindowA, GetWindowThreadProcessId, OpenProcess, ReadProcessMemory, CloseHandle.

What I built — First ReadProcessMemory program reading live health value from Assault Cube. Debugged Rectangle class stepping through GetArea() with F11.

What I can explain now — how to use the debugger to find bugs, what every Windows API function in the memory reading chain does and why, what HANDLE and HWND are, what ReadProcessMemory parameters mean.