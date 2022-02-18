/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:51:25 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/18 19:40:43 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Form		form1("ISO1", 10, 10);
		Bureaucrat	bureaucrat1("Tom", 11);
		std::cout << form1;
		std::cout << bureaucrat1;

		bureaucrat1.signForm(form1);
		std::cout << form1;
		bureaucrat1.incrementGrade();
		bureaucrat1.incrementGrade();
		bureaucrat1.signForm(form1);
		std::cout << bureaucrat1;
		std::cout << form1;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}