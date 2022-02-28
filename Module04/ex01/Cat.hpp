#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		Cat(const Cat &copy);
		virtual ~Cat();
		Cat	&operator=(const Cat &cat);

		Brain	*getBrain() const;
		void makeSound () const;
};
