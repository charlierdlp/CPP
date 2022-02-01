#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		 std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal();
		std::string	WrongAnimal::getType(void) const;
		WrongAnimal	&operator=(const WrongAnimal &animal);

		void	makeSound() const;
};


