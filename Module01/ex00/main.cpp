#include "Zombie.hpp"

int main()
{
	Zombie *testZombie;

	testZombie = newZombie("Michael");
	std::cout << "This Zombie is allocated on the stack:" << std::endl;
	testZombie->announce();
	delete testZombie;
	std::cout << "This Zombie is allocated on the heap:" << std::endl;
	randomChump("Phill");
}