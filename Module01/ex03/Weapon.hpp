#pragma once

#include <iostream>

class Weapon
{
    private:

		std::string	_type;

    public:

        void setType(std::string type);
        std::string getType() const;
};