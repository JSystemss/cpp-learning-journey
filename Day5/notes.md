Pointers (Quiz Me)
What is a pointer?
What does & do?
What does * do?
What is dereferencing?
What is the difference between ptr and *ptr?
How do pointers connect to arrays?

---

Pointers (Answers)
Pointer = variable that stores a memory address
& = gets the address of a variable
= dereferences a pointer (accesses the value at that address)
Dereferencing = going to the memory address and accessing the value
ptr = address, *ptr = value
Arrays store values in contiguous memory, pointers can access those memory locations

---

Pointers + Arrays (Key Concepts)
Array name = address of first element
arr == &arr[0]
arr[x] == *(arr + x)
Pointer arithmetic moves through memory
*(ptr + 1) = next element
*(ptr + 2) = element after that

---

Key Insight
Pointers give direct access to memory
*ptr changes the VALUE, not the address
C++ does NOT protect memory access → must be careful
Arrays and pointers are deeply connected
