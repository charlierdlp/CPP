#include "DiamondTrap.hpp"

int main ()
{
	ClapTrap mark1("Jarvis");
	ScavTrap mark2("Friday");
	FragTrap mark3("Mark");
	DiamondTrap mark4("Rock");

	mark4.attack("hola");
	mark1.attack("Friday");
	mark2.takeDamage(20);
	mark2.beRepaired(18);
	mark2.attack("Jarvis");
	mark3.attack("Friday");
	mark1.takeDamage(50);	
	mark2.guardGate();
	mark3.highFivesGuys();
	mark4.whoAmI();
	mark4.guardGate();
}