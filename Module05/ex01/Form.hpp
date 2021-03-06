/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:45:36 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/01 11:20:06 by cruiz-de         ###   ########.fr       */
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
	private:
		const std::string _name;
		bool			_signed;
		int const	 _gradeSign;
		int const _gradeExecute;


	public:
		Form(std::string const name,  int gradeSign, int gradeExecute);
		Form(const Form &copy);
		virtual ~Form();
		Form	&operator=(const Form &form);

		std::string	getName(void) const;
		bool		isSigned () const;
		int			getGradeSign() const;
		int			getGradeExecute() const;
		void 		beSigned(Bureaucrat &bureaucrat);

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
};
std::ostream &operator<<(std::ostream &output, Form const &form);
