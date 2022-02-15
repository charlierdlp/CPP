/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:08:54 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/15 20:27:26 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();

		Bureaucrat	&operator=(const Bureaucrat &bureaucrat);
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Too high";
			}
		}

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw()
			{
				return "Too low";
			}
		}
};
std::ostream &operator<<(std::ostream &output, Bureaucrat const &bureaucrat);