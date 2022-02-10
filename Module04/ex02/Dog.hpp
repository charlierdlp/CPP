#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();
		Dog	&operator=(const Dog &dog);

		Brain	*getBrain() const;
		void makeSound () const;
};
