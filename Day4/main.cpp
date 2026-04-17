#include <iostream>
#include "Log.h"




// This prints 1 - 10

void OneToTen()
{
	int i = 1;
	int result;
	for (; i <= 10; i++)
	{
		result = i;
		std::cout << i << std::endl;
	}
}


void TenToOne()
{
	int i = 10;
	int result;
	for (; i >= 1; i--)
	{
		result = i;
		std::cout << i << std::endl;
	}
}


void EvenNumbers()
{
	int i = 1;
	int result;
	for (; i <= 20; i++)
	{
		if (i % 2 == 0)
		{
			result = i;
			std::cout << result << std::endl;
		}
	}
}

int main()
{
	Log("OneToTen:");
	OneToTen();
	Log("---------------------------\n");
	Log("Ten to One:\n");
	TenToOne();
	Log("----------------\n");
	Log("EvenNumbers\n");
	EvenNumbers();
}


