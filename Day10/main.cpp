#include <iostream>
#define LOG(x) std::cout << x << std::endl;

struct Car {
	
	static int totalCars;
	int fuel;

public:

	static int GetTotalCars()
	{
		return totalCars;
	}

	void Refuel(int amount)
	{
		fuel += amount;
	}
};

int Car::totalCars;

int main()
{
	Car car1;
	car1.fuel = 20;
	Car::totalCars++;

	Car car2;
	car2.fuel = 50;
	Car::totalCars++;

	Car	car3;
	car3.fuel = 10;
	Car::totalCars++;

	LOG("Total Cars: " << Car::GetTotalCars());

	LOG("Car 2's fuel: " << car2.fuel); // Car 2's fuel: 50

	car2.Refuel(30); // 80 Car 2's fuel: 80

	LOG("Car 2's fuel: " << car2.fuel);

	LOG("Total Cars: " << Car::GetTotalCars());
	std::cin.get();
}