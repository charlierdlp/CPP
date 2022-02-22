#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : _name(clapTrap._name), _hitpoints(clapTrap._hitpoints), _energyPoints(clapTrap._energyPoints), _attackDamage(clapTrap._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	this->_name = clapTrap._name;
	this->_hitpoints = clapTrap._hitpoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_attackDamage = clapTrap._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int points)
{
	this->_hitpoints = points;
}

void	ClapTrap::setEnergyPoints(unsigned int energy)
{
	this->_energyPoints = energy;
}

void	ClapTrap::setAttackDamage(unsigned int damage)
{
	this->_attackDamage = damage;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->_hitpoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target <<", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;
	std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	std::cout << this->_name << " has been repaired by " << amount << " points" << std::endl;
}