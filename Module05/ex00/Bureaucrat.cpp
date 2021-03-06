/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:09:10 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/01 11:16:56 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

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

Bureaucrat::~Bureaucrat() {}

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

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat)
{
	output << "Name: " << bureaucrat.getName() << " - Bureaucrat grade: " << bureaucrat.getGrade() << std::endl;

	return output;
}
