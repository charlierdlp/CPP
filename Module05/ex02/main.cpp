/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:51:25 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/22 13:13:35 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
	try
	{
		ShrubberyCreationForm shrubbery("hey");
		Bureaucrat	bureaucrat1("Ye", 1);
		Bureaucrat	bureaucrat2("Skete", 150);
		bureaucrat2.executeForm(shrubbery);
		bureaucrat1.signForm(shrubbery);
		bureaucrat2.signForm(shrubbery);
		bureaucrat1.executeForm(shrubbery);
		bureaucrat2.executeForm(shrubbery);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}