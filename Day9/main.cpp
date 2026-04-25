#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Car {
public:
    int fuel;
};

void AddFuelCopy(Car car, int amount)
{
    car.fuel += amount;
}

void AddFuelReal(Car& car, int amount)
{
    car.fuel += amount;
}

int main()
{
    Car car1;
    car1.fuel = 50;

    LOG("Before: " << car1.fuel);      // 50

    AddFuelCopy(car1, 20);
    LOG("After copy: " << car1.fuel);  // still 50

    AddFuelReal(car1, 20);
    LOG("After real: " << car1.fuel);  // 70

    std::cin.get();
}

// Member Functions:

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Weapon {
public:
	int damage;
	int range;
	bool isEquipped;

	void Equip()
	{
		isEquipped = true;
	}

	void Upgrade()
	{
		damage = damage + 2;
	}
};


int main()
{
	Weapon Sword;

	Sword.damage = 5;
	Sword.range = 3;
	Sword.isEquipped = false;

	LOG("Sword:");
	LOG("Damage of Sword: " << Sword.damage << " Hearts"); // 5
	LOG("Range of Sword: " << Sword.range << " Blocks");
	LOG("Is Sword Equipped: " << (Sword.isEquipped ? " Sword Toggled\n\n" : "No\n\n")); // No

	Sword.Equip(); // Sword now toggled.
	Sword.Upgrade(); // Sword Damage now 7.

	LOG("----After Function Calls----");
	LOG("Sword:");
	LOG("Damage of Sword: " << Sword.damage << " Hearts");
	LOG("Range of Sword: " << Sword.range << " Blocks");
	LOG("Is Sword Equipped: " << (Sword.isEquipped ? " Sword Toggled\n\n" : "No\n\n"));

	std::cin.get();
}
