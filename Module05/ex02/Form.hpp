/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:45:36 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/22 20:37:19 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
	protected:
		std::string target;

	private:
		const std::string _name;
		bool			_signed;
		int const	_gradeSign;
		int const	_gradeExecute;


	public:
		Form(std::string const name,  int gradeSign, int gradeExecute);
		Form(const Form &copy);
		~Form();
		Form	&operator=(const Form &form);

		std::string	getName(void) const;
		bool		isSigned () const;
		int			getGradeSign() const;
		int			getGradeExecute() const;
		void 		beSigned(Bureaucrat &bureaucrat);

		void				check_execute(Bureaucrat const &executor) const;
		virtual void		execute(Bureaucrat const &executor) const = 0;


		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Grade Too High!";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Grade Too Low!";
				}
		};

		class FormUnsignedException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Grade Too Low!";
				}
		};
};
std::ostream &operator<<(std::ostream &output, Form const &form);
