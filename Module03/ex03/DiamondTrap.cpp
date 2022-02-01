#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hitpoints = this->FragTrap::getHitPoints();
	this->_energyPoints = this->ScavTrap::getEnergyPoints();
	this->_attackDamage = this->FragTrap::getAttackDamage();
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy), _name(copy._name)
{
	this->_hitpoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	this->_name = diamondTrap._name;
	this->_attackDamage = diamondTrap.getAttackDamage();
	this->_energyPoints = diamondTrap.getEnergyPoints();
	this->_hitpoints = diamondTrap.getHitPoints();
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am: " << this->_name << " and my ClapTrap name is: "<< this->ClapTrap::getName() << std::endl;
}