/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:44:55 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/22 20:38:05 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const gradeSign, int const gradeExecute) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute) 
{
	if (this->_gradeSign < 1 || this->_gradeExecute < 1)
		throw Form::GradeTooLowException();
	else if (this->_gradeSign > 150 || this->_gradeExecute > 150)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &copy) : _name(copy.getName()), _signed(copy.isSigned()), _gradeSign(copy.getGradeSign()), _gradeExecute(copy.getGradeExecute())
{
	
}

Form &Form::operator=(const Form &)
{
	return *this;
}

Form::~Form()
{
	
}

std::string	Form::getName(void) const
{
	return this->_name;
}

bool	Form::isSigned() const
{
	return this->_signed;
}

int Form::getGradeSign() const
{
	return this->_gradeSign;
}

int	Form::getGradeExecute() const
{
	return this->_gradeExecute;
}

void 	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::check_execute(Bureaucrat const &executor) const
{
	if (!this->_signed)
		throw Form::FormUnsignedException();
	else if (executor.getGrade() > this->_gradeExecute)
		throw Form::GradeTooLowException();
	std::cout << executor.getName() << " execute " << this->_name << std::endl;
}

void	Form::execute(Bureaucrat const & executor) const
{
	this->check_execute(executor);
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
	output << "Form: " << form.getName() << " | Form grade: " << form.getGradeSign() 
	<< " | Form grade to execute: " << form.getGradeExecute() 
	<< " | Signed status: " << form.isSigned() << std::endl;

	return output;
}
