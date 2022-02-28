#pragma once
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0; //copy the materia passed as parameter and store in memory to be cloned later
		virtual AMateria* createMateria(std::string const & type) = 0;
};