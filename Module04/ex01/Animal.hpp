#pragma once
#include <string>
#include <iostream>

class Animal
{
	protected:
		 std::string _type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal();
		std::string	getType(void) const;
		Animal	&operator=(const Animal &animal);

		void	makeSound() const;
};


