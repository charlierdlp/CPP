#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern(void)
{
}

Intern &Intern::operator=(Intern const &src)
{
	return *this;
}

Form *Intern::makePresidentialPardon(std::string &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeShrubberyCreation(std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequest(std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string	const levels[3] = {"Presidential Pardon", "Shrubbery Creation", "Robotomy Request"};

	Form *(Intern::*ptr2F[3])(std::string &target) =
	{
		&Intern::makePresidentialPardon,
		&Intern::makeShrubberyCreation,
		&Intern::makeRobotomyRequest,
	};

	for (int i = 0; i < 3; i++)
	{
		if (levels[i] == name)
			return (this->*ptr2F[i])(target);
	}
	throw Intern::UnknownFormException();
}