#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->_type = copy._type;
	std::cout	<< "WrongCat copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat)
{
	this->_type = wrongcat._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat sound!" << std::endl;
}
