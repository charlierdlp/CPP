#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal *friends[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			friends[i] = new Dog();
		else
			friends[i] = new Cat();
	}

	for (int i = 0; i < 10; i++)
		delete friends[i];

	delete j;//should not create a leak
	delete i;
}