#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->_brain = new Brain();
	this->_brain = copy._brain;
	std::cout	<< "Cat copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &Cat)
{
	delete this->_brain;
	this->_brain = new Brain();
	this->_brain = Cat._brain;
	this->_type = Cat._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow sound!" << std::endl;
}
