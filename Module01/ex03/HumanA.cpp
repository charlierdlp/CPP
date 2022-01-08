#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    
}

HumanA::~HumanA()
{

}

void HumanA::atack()
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}