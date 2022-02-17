/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:44:55 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/17 19:36:10 by cruiz-de         ###   ########.fr       */
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

Form &Form::operator=(const Form &form)
{
	return *this;
}

Form::~Form()
{
	
}

std::string	Form::getName() const
{
	return this->_name;
}

int Form::getGrade() const
{
	return this->_grade;
}

void 	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() >= this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream &operator<<(std::ostream &output, Form const &form)
{
	output << "Form: " << form.getName() << " form grade: " << form.getGradeSign() 
	<< " form grade to execute: " << form.getGradeExecute() 
	<< " status: " << form.isSigned() << std::endl;

	return output;
}
