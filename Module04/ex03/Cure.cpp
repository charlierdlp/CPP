#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(std::string const & type)
{
	*this = type;
}

Cure::~Cure()
{

}

Cure	&Cure::operator=(const Cure &cure)
{
	this->_type = cure._type;
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}