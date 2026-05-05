#include <iostream>
#define LOG(x) std::cout << x << std::endl;

struct Player {
	int heath;
	int speed;

	Player(int h, int s)
	{
		heath = h;
		speed = s;
	}
};

int main()
{
	Player p1(100, 5);
	Player p2(80, 8);


	LOG("heath: " << p1.heath << " speed: " << p1.speed << std::endl);
	LOG("heath: " << p2.heath << " speed: " << p2.speed << std::endl);

	std::cin.get();
}