#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : _name(clapTrap._name), _hitpoints(clapTrap._hitpoints), _energyPoints(clapTrap._energyPoints), _attackDamage(clapTrap._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitpoints = clapTrap._hitpoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	this->_attackDamage += _hitpoints;
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << this->_name << " has been repaired by " << amount << " points" << std::endl;
}