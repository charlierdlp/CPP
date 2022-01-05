#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "My name is: " << this->_name << std::endl;
}

void Zombie::announce()
{
	std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
}