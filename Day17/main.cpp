#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> inventory;

	inventory["apples"] = 50;
	inventory["bread"] = 12;
	inventory["milk"] = 8;
	inventory["eggs"] = 24;

	std::cout << "We have " << inventory["apples"] << " Apples" << std::endl;
	std::cout << "We have " << inventory["bread"] << " loaves of bread" << std::endl;
	std::cout << "We have " << inventory["milk"] << " bags of milk" << std::endl;
	std::cout << "We have " << inventory["eggs"] << " eggs" << std::endl;

	std::cin.get();
	return 0;
}