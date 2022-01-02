/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:25:58 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/01/02 20:03:32 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	int menu;
	std::string input;

	menu = 1;
	while (menu)
	{
		std::cout << "------------" << std::endl;
		std::cout << "|Phone Book|" << std::endl;
		std::cout << "------------" << std::endl;
		std::cout << "Enter a valid option (ADD, SEARCH, EXIT)" << std::endl;
		std::cout << ">";
		std::getline(std::cin, input);
		

		if (!input.compare("ADD"))
			phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact();
		else if (!input.compare("EXIT"))
			menu = 0;
		else 
		   std::cout << "Invalid option" << std::endl; 
	}
	return (0);
}