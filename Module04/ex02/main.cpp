#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	//Animal cow;
	Animal *friends[4];

	Dog basic;
	{
		Dog tmp = basic;
		std::cout << "address: " << tmp.getBrain() << std::endl;
	}
	std::cout << "address: " << basic.getBrain() << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			friends[i] = new Dog();
		else
			friends[i] = new Cat();
	}

	for (int i = 0; i < 4; i++)
		delete friends[i];

	delete i;
	delete j;//should not create a leak
}