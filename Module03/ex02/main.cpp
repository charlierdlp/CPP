#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ()
{
	ClapTrap mark1("Jarvis");
	ScavTrap mark2("Friday");

	mark1.attack("Friday");
	mark2.takeDamage(20);
	mark2.beRepaired(18);
	mark2.attack("Jarvis");
	mark1.takeDamage(50);

	mark2.guardGate();
}