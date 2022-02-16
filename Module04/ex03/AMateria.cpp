#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const & type) : _type(type)
{

}

AMateria::~AMateria() {}

AMateria	&AMateria::operator=(const AMateria &materia)
{
	this->_type = materia._type;
	return *this;
}

AMateria::AMateria(const AMateria &copy)
{
	this->operator=(copy);
}

std::string const &AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{

}

