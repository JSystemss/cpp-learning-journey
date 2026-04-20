#include <iostream>
#define LOG(x) std::cout << x << std::endl;



void PMem(int* ptr) // Sets Pointer Value to == 1000
{
	*ptr = 1000;
}

void RMem(int& x) // Assigns variable through my reference to == 2000
{
	x = 2000;
}

void AMem(int* x)
{
	*(x + 2) = 99;
}

void AR(int& x)
{
	x = 199;
}

int main()
{
	LOG("------POINTER FUNCTION------");

	
	int variable = 0;
	int* fpointer = &variable;
	PMem(fpointer);
	LOG(variable);

	LOG("------REFERENCE FUNCTION------");

	RMem(variable); // This function takes my variable by reference and changes it 
	LOG(variable);

	LOG("------ARRAY + POINTER------");
	int array[5] = { 1, 2, 3, 4, 5 };
	int* ArrayP = array;
	AMem(ArrayP); // This function changed the value of my third element's memory address
	for (; ArrayP < array + 4; ArrayP++) // Sends 4 elements of my array to the Console 
	{
		LOG(*ArrayP)
	}
	
	LOG("------ARRAY + REFERENCE------");

	int arr[5] = { 1, 2, 3, 4, 5 };
	int result = 0;
	AR(arr[2]); // This function set the Third value of my array to 199
	LOG(arr[2]);
	std::cin.get();
}