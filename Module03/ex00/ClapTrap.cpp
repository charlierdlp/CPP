#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap <name> attack <target>, causing <damage> points of damage!" << std::endl;
}