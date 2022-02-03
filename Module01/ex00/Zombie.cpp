#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string _name)
{
	this->_name = _name;
}

Zombie::~Zombie()
{
	std::cout << "My name is: " << this->_name << " and I'm dying" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}