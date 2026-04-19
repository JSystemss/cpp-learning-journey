#include <iostream>
#define LOG(message) std::cout << message << std::endl;

int main()
{
	// BASIC POINTER
	int a = 15;
	int* ptr = &a;
	LOG(*ptr); // Value
	LOG(ptr); // Memory Address
		

	// MODIFY THROUGH POINTER

	LOG(a); // Normal Value of my original variable ( 15 )
	*ptr = 25; // Changes the Value of the Memory Address from 15 to 25
	LOG(*ptr); // Print the Memory Addresses Value
	

	// ARRAY + POINTER

	int arr[5] = { 0, 1, 2, 3, 4 };

	int* arrPointer = &arr[0];


	// ACCESS ARRAY WITH POINTER

	LOG("-----------------------");
	int* arrPointer = arr;
	for (; arrPointer < arr + 3; arrPointer++)
	{
		std::cout << *arrPointer << std::endl;
	}

	//MODIFY ARRAY USING POINTER

	LOG("----------------")
	int* arrPointer = arr;
	*(arrPointer + 2) = 99;
	for (; arrPointer < arr + 3; arrPointer++)
	{
		std::cout << *arrPointer << std::endl;
	}
	std::cin.get();
}

