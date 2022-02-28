#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

//* Abstract classes CAN'T be instantiated
//* A class is made abstract by declaring at least one function as pure virtual ( = 0)
//* A pure virtual function MUST BE overriden in the subclass. Otherwise you get a compilation error

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();
		AMateria	&operator=(const AMateria &materia);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};