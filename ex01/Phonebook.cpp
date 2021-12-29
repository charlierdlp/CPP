/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:40 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/29 20:18:28 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook()
{
}


int Phonebook::addContact(void)
{
	Contact new_contact;
	std::string tmp;
	int	i;

	i = 0;
	while (!this->_contacts[i].is_empty())
		i++;
	std::cout << "First name: ";
	std::getline(std::cin, tmp);
	new_contact.setFirstName(tmp);
	std::cout << "Last name: ";
	std::getline(std::cin, tmp);
	new_contact.setLastName(tmp);
	std::cout << "Nickname: ";
	std::getline(std::cin, tmp);
	new_contact.setNickName(tmp);
	std::cout << "Phone number: ";
	std::getline(std::cin, tmp);
	new_contact.setPhoneNumber(tmp);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, tmp);
	new_contact.setDarkestSecret(tmp);
	std::cout << std::endl << "Contact saved succesfully" << std::endl;
	_contacts[i] = new_contact;
	i++;
	return (i);
}

void Phonebook::searchContact(int count)
{
	int index;

	index = 0;
	if (count == 0)
	{
		system("clear");
		std::cout << "Error: empty Phone Book" << std::endl;
		sleep(2);
		system("clear");
		return ;
	}
	std::cout << "  -------    --------   ---------   --------" << std::endl;
	std::cout << " | INDEX |  |  NAME  | |LAST NAME| |NICKNAME|" << std::endl;
	std::cout << "  -------    --------   ---------   --------" << std::endl;
	while (index < count)
	{
		std::cout << "|" << std::setw(10) << index << "|"
		<< std::setw(10) << this->_contacts[index].getfirstName() << "|"
		<< std::setw(10) << this->_contacts[index].getlastName() << "|"
		<< std::setw(10) << this->_contacts[index].getnickName() << "|" << std::endl;
		index++;
	}
	std::cout << "Enter the index of the contact you want to display: " << std::endl;

}
