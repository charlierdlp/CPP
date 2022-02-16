#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(std::string const & type)
{
	*this = type;
}

Ice::~Ice()
{

}

Ice	&Ice::operator=(const Ice &ice)
{
	this->_type = ice._type;
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}