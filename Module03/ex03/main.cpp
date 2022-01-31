#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	ClapTrap mark1("Jarvis");
	ScavTrap mark2("Friday");
	FragTrap mark3("Mark");

	mark1.attack("Friday");
	mark2.takeDamage(20);
	mark2.beRepaired(18);
	mark2.attack("Jarvis");
	mark3.attack("Friday");
	mark1.takeDamage(50);

	mark2.guardGate();
	mark3.highFivesGuys();
}