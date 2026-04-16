#include <iostream>
#include "Log.h"

int main()
{
	int x = 60;
	bool comparisonOfX = x == 5;

	if (comparisonOfX)
		Log("I Love C++");

	else if (x == 60)
		Log("yo this is 60");

	else
		Log("I Hate C++");
	std::cin.get();
}

// code