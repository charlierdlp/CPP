/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:51:25 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/23 19:52:09 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat		boss("Ye", 1);
	Bureaucrat		assistant("Cudi", 40);
	Bureaucrat		temp("Skete", 150);
	Intern			randomIntern;

	try
	{
		Form *pf = randomIntern.makeForm("Presidential Pardon", "Larry Hoover");		// 25, 5
		std::cout<< *pf <<std::endl;
		boss.signForm(*pf);
		boss.executeForm(*pf);
		delete pf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form *rr = randomIntern.makeForm("Robotomy Request", "Kim");				// 72, 45
		std::cout<< *rr <<std::endl;

		boss.signForm(*rr);
		assistant.executeForm(*rr);
		boss.executeForm(*rr);
		boss.executeForm(*rr);
		temp.executeForm(*rr);
		delete rr;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *sc = randomIntern.makeForm("Shrubbery Creation", "stem");			// 145, 137
		std::cout<< *sc <<std::endl;
		assistant.signForm(*sc);
		std::cout<< *sc <<std::endl;
		assistant.executeForm(*sc);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *dm = randomIntern.makeForm("Space X", "stem");			// 145, 137
		std::cout<< *dm <<std::endl;
		assistant.signForm(*dm);
		std::cout<< *dm <<std::endl;
		assistant.executeForm(*dm);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}