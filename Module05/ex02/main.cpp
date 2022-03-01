/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:51:25 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/01 11:58:09 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat		boss("Steve", 1);
	Bureaucrat		assistant("Woz", 40);
	Bureaucrat		temp("Ryan", 150);

	try
	{
		PresidentialPardonForm pf("Trump");		// 25, 5
		std::cout << pf << std::endl;
		pf.beSigned(boss);
		boss.executeForm(pf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		RobotomyRequestForm rb("Bender");				// 72, 45
		std::cout << rb << std::endl;

		rb.beSigned(assistant);
		assistant.executeForm(rb);
		boss.executeForm(rb);
		boss.executeForm(rb);
		boss.executeForm(rb);
		temp.executeForm(rb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		ShrubberyCreationForm sf("runaway");		// 145, 137
		std::cout<< sf <<std::endl;
		sf.beSigned(assistant);
		std::cout<< sf <<std::endl;
		assistant.executeForm(sf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}