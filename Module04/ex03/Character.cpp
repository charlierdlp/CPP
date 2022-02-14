#include "Character.hpp"

Character::Character() : _name("")
{

}

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &copy)
{
	this->_name = copy._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = copy._inventory[i];
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->_inventory[i];
}

Character & Character::operator=(Character const &character)
{
	this->_name = character._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = character._inventory[i];
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}