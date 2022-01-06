#include "Zombie.hpp"

int main()
{
	Zombie *hordeZombie;

	hordeZombie = zombieHorde(5, "test");
	for (int i = 0; i < 5; i++)
		hordeZombie[i].announce();

	delete []hordeZombie;
}