#include <iostream>
#define LOG(x) std::cout << x << std::endl;


int FunctionA()
{
	int sVar = 5; // normal Variable on stack
	return sVar; // Sends it to console
}

int* FunctionB()
{
	int* AFptr = new int; // "Put's any value that's pointed at by this Pointer (AFptr) in Heap"
	*AFptr = 11; // Sets value of my pointer in Heap
	return AFptr; // Sends value to console
}

int main()
{
	LOG("PART 1: STACK VARIABLE");
	int num1 = 5; 
	LOG(num1); // 5 sent to Console.

	LOG("PART 2: HEAP VARIABLE");

	int* Hptr = new int; // Put's any value that's pointed at by this Pointer (Hptr) in Heap.
	*Hptr = 7; // Dereferences my Pointer and sets it's value to 7 which will be in Heap and not Stack because of the line above.
	LOG(Hptr); // Logs my Pointers Address

	LOG("PART 3: COMPARE THEM");

	LOG(num1); // Sends my (Stack variable) which is assigned to 5 to the console.
	LOG(*Hptr); // Dereferences my Pointer (Hptr) which assigned to 7 which is in Heap memory. 
	LOG(Hptr); // Pointer itself (stack) which is assigned to the Memory address of it's value (7) in Heap Memory (should be 4 bytes).


	LOG("PART 4 FUNCTION TEST");

	FunctionA();
	FunctionB();

	int* ptr = FunctionB();
	LOG(*ptr);
	delete ptr;
	std::cin.get();
}