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