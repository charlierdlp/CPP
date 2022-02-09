#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default Constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
	std::cout << "Dog copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &Dog)
{
	delete this->_brain;
	this->_brain = new Brain();
	*this->_brain = *Dog._brain;
	this->_type = Dog._type;
	return *this;
}

Brain	*Dog::getBrain() const
{
	return this->_brain;
}

void	Dog::makeSound() const
{
	std::cout << "Bark sound!" << std::endl;
}
