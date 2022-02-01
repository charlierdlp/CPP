#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &fragTrap);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &fragTrap);
		void highFivesGuys(void);

};