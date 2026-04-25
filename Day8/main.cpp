#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Phone {
public:
	int battery;
	int storage;
	bool isLocked;
};

int main()
{
	Phone iphone;
	Phone Samsung;
	Phone GooglePixel;

	iphone.battery = 100;
	iphone.storage = 500;
	iphone.isLocked = false;

	Samsung.battery = 25;
	Samsung.storage = 1000;
	Samsung.isLocked = true;

	GooglePixel.battery = 1;
	GooglePixel.storage = 10;
	GooglePixel.isLocked = false;

	std::string iLocked = "";
	std::string sLocked = "";
	std::string gpLocked = "";

	if (iphone.isLocked == false)
	{
		iLocked = "Iphone is not locked";
	}
	else
	{
		iLocked = "Iphone is not locked";
	}
	
	LOG("----Phone Checker----\n\n");

	LOG("iPhone:")
	LOG("iPhone Battery: " << iphone.battery << "%");
	LOG("iPhone Storage: " << iphone.storage << "GB");
	LOG("is Iphone Locked?: " << iLocked << "\n\n");


	if (Samsung.isLocked == false) 
	{
		sLocked = "Samsung is not locked";
	}
	else
	{
		sLocked = "Samsung is Locked";
	}

	LOG("Samsung:");
	LOG("Samsung Battery: " << Samsung.battery << "%");
	LOG("Samsung Storage: " << Samsung.storage << "GB");
	LOG("Is Samsung Locked?: " << sLocked << "\n\n");

	if (GooglePixel.isLocked == false)
	{
		gpLocked = "GooglePixel is not Locked";
	}
	else
	{
		gpLocked = "GooglePixel is Locked";
	}

	LOG("GooglePixel");
	LOG("GooglePixel Battery: " << GooglePixel.battery << "%");
	LOG("GooglePixel Storage: " << GooglePixel.storage << "GB");
	LOG("Is GooglePixel Locked?: " << gpLocked << "\n\n");
	std::cin.get();
}




// Mini Task 2 

#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Car {
public:

	int speed;
	int fuel;
	bool engineOn;

	void startEngine()
	{
		engineOn = true;
	}

	void Drive(int distance)
	{
		fuel -= distance;
	}
};

int main()
{
	Car car1;
	car1.speed = 0;
	car1.fuel = 100;
	car1.engineOn = false;

	
	LOG("Car 1 Status: \n\n");
	LOG("Speed: " << car1.speed << "mph, " << "Fuel: " << car1.fuel << "l, " << "Is engine On? " << (car1.engineOn ? "Engine On" : "Engine Off") ); // 0 for eOn
	car1.startEngine();
	car1.Drive(30);
	LOG("Speed: " << car1.speed << "mph, " << "Fuel: " << car1.fuel << "l, " << "Is engine On? " << (car1.engineOn ? "Engine On" : "Engine Off")); // 1 for eOn + - 30 off 100 fuel = 70
	std::cin.get();
}

