/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:09:10 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/01 11:56:27 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	this->_grade = bureaucrat.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
	if ((this->getGrade() - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if ((this->getGrade() + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.isSigned())
	{
		std::cout << "Form: " << form.getName() << " is already signed!" << std::endl;
		return;
	}
	try
	{
		std::cout << "Bureaucrat: " << this->_name << " signs form: " << form.getName() << std::endl;
		form.beSigned(*this);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat: " << this->getName() << " cannot execute the form: " << form.getName() << " | Reason: " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch (Form::FormUnsignedException &e)
	{
		std::cout << "Bureaucrat: " << this->getName() << " cannot execute the form: " << form.getName() << " | Reason: " << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat: " << this->getName() << " cannot execute the form: " << form.getName() << " | Reason: " << e.what() << std::endl;
	}

}

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << bureaucrat.getName() << " bureaucrat grade: " << bureaucrat.getGrade();

	return output;
}
