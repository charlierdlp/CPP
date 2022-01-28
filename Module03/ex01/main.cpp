#include "ClapTrap.hpp"

int main ()
{
	ClapTrap mark1("Jarvis");
	ClapTrap mark2("Friday");

	mark1.attack("Friday");
	mark2.takeDamage(20);
	mark2.beRepaired(18);
	mark2.attack("Jarvis");
	mark1.takeDamage(50);
}