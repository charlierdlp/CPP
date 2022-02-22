#pragma once
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern &operator=(Intern const &src);
		class UnknownFormException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("[Intern]Unable to create form");
				}
		};
		Form *makePresidentialPardon(std::string &target);
		Form *makeShrubberyCreation(std::string &target);
		Form *makeRobotomyRequest(std::string &target);
		Form *makeForm(std::string name, std::string target);
};