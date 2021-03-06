#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat	&operator=(const Cat &cat);

		void makeSound() const;
};
