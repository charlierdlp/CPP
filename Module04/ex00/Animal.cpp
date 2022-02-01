#include "Animal.hpp"

Animal::Animal() : _type("")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	this->_type = copy._type;
	std::cout	<< "Animal copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

Animal &Animal::operator=(const Animal &animal)
{
	this->_type = animal._type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound!" << std::endl;
}
