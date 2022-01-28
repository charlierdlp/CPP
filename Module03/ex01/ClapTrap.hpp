#pragma once

#include <iostream>

class ClapTrap
{
	private:

		std::string _name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &clapTrap);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &clapTrap);
	
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};