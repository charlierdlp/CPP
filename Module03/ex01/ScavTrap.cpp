#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("",  _hitpoints(100), _energyPoints(50), _attackDamage(20))
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}