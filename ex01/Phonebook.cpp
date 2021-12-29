/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:40 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/29 14:07:50 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
}

Phonebook::~Phonebook()
{
}


void Phonebook::addContact(void)
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
}

void Phonebook::searchContact()
{
	int index;

	index = 0;
	std::cout << "-------    ------------    -----------     ----------" << std::endl;
	std::cout << "|INDEX|    |FIRST NAME|    |LAST NAME|     |NICKNAME|" << std::endl;
	std::cout << "-------    ------------    -----------     ----------" << std::endl;
	std::cout << setw(10) << "|"
	std::cout << this->_contacts[0].getfirstName() << std::endl;
	std::cout << this->_contacts[0].getlastName() << std::endl;
	std::cout << this->_contacts[0].getnickName() << std::endl;
	std::cout << this->_contacts[0].getphoneNumber() << std::endl;
	std::cout << this->_contacts[0].getdarkestSecret() << std::endl;
}
