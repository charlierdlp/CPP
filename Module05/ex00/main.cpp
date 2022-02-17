/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:51:25 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/17 13:41:51 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat bureaucrat1("Tom", 10);
		std::cout << "Grade: " << bureaucrat1.getGrade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << std::endl;

	try
	{
		Bureaucrat bureaucrat2("Michael", 150);
		bureaucrat2.decrementGrade();
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;

	}

	std::cout << std::endl;
	
	try
	{
		Bureaucrat bureaucrat3("Phill", 2);
		bureaucrat3.incrementGrade();
		std::cout << "Grade: " << bureaucrat3.getGrade() << std::endl;
		bureaucrat3.incrementGrade();
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}