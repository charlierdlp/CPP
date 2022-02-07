#pragma once

#include <iostream>
#include <string>

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &copy);
		virtual ~Brain();
		Brain	&operator=(const Brain &brain);
};
