#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

Weapon::~Weapon()
{

}

void Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string Weapon::getType() const
{
    return this->_type;
}