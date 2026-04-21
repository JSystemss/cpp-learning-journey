# 📅 Day 7 — Stack vs Heap, Pointers, Memory

---

## What I Learned (Quiz Me)

### Stack vs Heap
- What is the difference between stack and heap?  
- What determines whether memory goes on stack or heap?  
- What does `new` do?  

### Pointers + Memory
- Where is a pointer stored?  
- Where is the memory from `new` stored?  
- What does a pointer actually store?  

### Memory Leaks
- What is a memory leak?  
- How do you accidentally create one?  

### Scope vs Lifetime
- What is scope?  
- What is lifetime?  
- What is the difference between them?  
- What happens to memory when a function ends?  

---

## Key Concepts (Answers)

### Stack vs Heap

**Stack**
- Stack is automatic memory  
- Used for normal variables and function data  
- Cleaned up automatically when scope ends  
- Very fast  

**Heap**
- Heap is manual memory  
- Created using `new`  
- Must be cleaned using `delete`  
- More flexible but slower  

### What Determines Stack vs Heap
- If you do NOT use `new` → stack  
- If you use `new` → heap  

---

### Pointers + Memory
- Pointer is stored on the stack  
- Heap memory is created with `new`  
- Pointer stores the address of that memory  

---

### Memory Leak
- Happens when heap memory is not deleted  

**Example**
- int* ptr = new int  
- ptr = nullptr  

**Result**
- Heap memory still exists  
- Pointer is lost  
- Cannot access or delete → memory leak  

---

### Scope vs Lifetime
- Scope = where you can access a variable  
- Lifetime = how long the memory exists  

**Stack Example**
- void Test() { int a = 5; }  
- Scope: inside the function  
- Lifetime: ends when function ends  
- Memory is destroyed automatically  

**Heap Example**
- int* Test() { int* ptr = new int; return ptr; }  
- Pointer goes out of scope  
- Heap memory still exists  
- Must be deleted manually  

---

## Mistakes I Fixed
- Thought stack vs heap depended on data type (int, float, etc.)  
- Thought heap was used because I didn’t know the size  
- Confused pointer with the memory it points to  
- Thought losing a pointer might not matter → it causes a leak  
- Mixed up scope and lifetime  

---

## Key Insight
- Stack vs heap is about how memory is allocated, not what the data is  
- Pointer is separate from the memory it points to  
- Stack memory is automatic  
- Heap memory stays until delete  
- Scope and lifetime are different concepts  

---

## My Takeaway
- Stack = automatic cleanup  
- Heap = manual control  
- Scope = where I can use something  
- Lifetime = how long it exists  
- Losing a pointer = memory leak  