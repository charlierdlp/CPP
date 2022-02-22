/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:51:25 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/22 20:52:15 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	try
	{
		//ShrubberyCreationForm shrubbery("hey");
		Bureaucrat	bureaucrat1("Ye", 1);
		Bureaucrat	bureaucrat2("Skete", 150);
		//bureaucrat2.executeForm(shrubbery);
		//bureaucrat1.signForm(shrubbery);
		//bureaucrat2.signForm(shrubbery);
		//bureaucrat1.executeForm(shrubbery);
		//bureaucrat2.executeForm(shrubbery);
		RobotomyRequestForm robo("Blender");
		bureaucrat1.executeForm(robo);
		bureaucrat1.signForm(robo);
		bureaucrat1.executeForm(robo);
		bureaucrat1.executeForm(robo);
		bureaucrat1.executeForm(robo);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}