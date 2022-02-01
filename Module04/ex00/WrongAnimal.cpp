#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->_type = copy._type;
	std::cout	<< "WrongAnimal copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal)
{
	this->_type = wronganimal._type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound!" << std::endl;
}
