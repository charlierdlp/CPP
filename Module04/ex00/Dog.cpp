#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	this->_type = copy._type;
	std::cout << "Dog copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &Dog)
{
	this->_type = Dog._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Bark sound!" << std::endl;
}
