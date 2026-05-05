#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Entity
{
public:
	Entity()
	{
		std::cout << "Entity Object Created" << std::endl;
	}


	~Entity()
	{
		std::cout << "Entity Object Deleted" << std::endl;
	}
};

int main()
{
	{ // As soon as this object gets created, my Constructor runs, 
		Entity G;
	} // Put G inside my scope so I can see my Deconstructor run and still have std::cin.get(); run after.
	std::cin.get();
}