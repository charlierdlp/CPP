#pragma once
#include <string>
#include <iostream>

//* All the functions in the Interface are pure virtual (= 0)
//* The Subclass MUST override / Implement ALL the pure virtual functions of the interface class
//* Interfaces can be "Multi-Inherited" as opposed to abstract class

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};