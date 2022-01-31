#pragma once

#include <iostream>

class ClapTrap
{
	protected:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &clapTrap);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &clapTrap);
	
		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	
		void			setName(std::string name);
		void			setHitPoints(unsigned int points);
		void			setEnergyPoints(unsigned int energy);
		void			setAttackDamage(unsigned int damage);
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

};