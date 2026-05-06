#include <iostream>
#define LOG(x) std::cout << x << std::endl;

class Entity {
public:
	int health;
	float xPosition, yPosition;
	float speed;

	void m_Move(std::string name, float xa, float ya)
	{
		xPosition = xa;
		yPosition = ya;
		std::cout << name << " moved: " << xPosition << ", " << yPosition << std::endl;
	}
};

class Player : public Entity
{
public:
	std::string name;

public:
	void m_Attack()
	{
		std::cout << name << " is Attacking" << std::endl;
	}

};

class Enemy : public Entity {
public:
	std::string name;
	float damage;

public:
	void m_Chase()
	{
		std::cout << name << " is Chasing" << std::endl;
	}

	~Enemy() // just a deconstructor for fun n for my learning which will print how much damage was dealt after the object gets deleted
	{
		std::cout << name << " has dealt: " << damage << " damage" << std::endl;
	}
};

int main()
{
	{
		Player p1;
		p1.name = "xfi";
		p1.health = 95;
		p1.speed = 1.00;

		Enemy e1;
		e1.name = "Deadlocked";
		e1.health = 15;
		e1.speed = 0.5;
		e1.damage = 5;

		e1.m_Move(e1.name, 96, 15);
		p1.m_Move(p1.name, 98, 27);

		p1.m_Attack();
		e1.m_Chase();

		LOG(e1.name << " Heath: " << e1.health << "\n" << p1.name << " Heath: " << p1.health);
	}
	std::cin.get();
}