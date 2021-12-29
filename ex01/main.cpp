/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:25:58 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/29 19:57:26 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook phonebook;
	int menu;
	int count = 0;
	std::string input;

	menu = 1;
	while (menu)
	{
		std::cout << "------------" << std::endl;
		std::cout << "|Phone Book|" << std::endl;
		std::cout << "------------" << std::endl;
		std::cout << "Enter a valid option (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);

		if (!input.compare("ADD"))
		   count = phonebook.addContact();
		else if (!input.compare("SEARCH"))
			phonebook.searchContact(count);
		else if (!input.compare("EXIT"))
			menu = 0;
		else 
		   std::cout << "Invalid option" << std::endl; 
	}
	return (0);
}