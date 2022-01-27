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
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &clapTrap);

		//void	setName(std::string name);
		//void	setHitPoints(int _hitpoints);
		//void	setEnergyPoints(int _energyPoints);
		//void	setAttackDamage(int _attackDamage);
		//getters
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};