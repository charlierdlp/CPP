/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:40 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/01/02 21:30:58 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->index = 0;
	this->count = 0;
}

Phonebook::~Phonebook()
{
}

std::string	Phonebook::display(std::string str)
{
	std::string formated;

	if (str.length() > 10)
	{
		formated = str.substr(0, 9) + ".";
		return (formated);
	}
	return (str);
}

void Phonebook::addContact(void)
{
	Contact new_contact;
	std::string tmp;
	int i;

	i = 0;
	while (!this->_contacts[i].is_empty() && i < 8)
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
	_contacts[i % 8] = new_contact;
	if (i < 8)
		this->count++;
	printf("count:%d  \n i:%d\n", this->count, i);
}

void Phonebook::displayContact(std::string input)
{
	int index;
	std::stringstream tmp;

	tmp << input;
	tmp >> index;
	if (this->_contacts[index].is_empty())
	{
		system("clear");
		std::cout << "Error: contact not found" << std::endl;
		sleep(2);
		system("clear");
		return ;
	}
	std::cout << "First name: " << this->_contacts[index].getfirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getlastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getnickName() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getphoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getdarkestSecret() << std::endl;
}

void Phonebook::searchContact()
{
	int index;
	std::string input;

	index = 1;
	if (this->count == 0)
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
	while (index < this->count)
	{
		std::cout << "|" << std::setw(10) << index << "|"
		<< std::setw(10) << this->display(_contacts[index].getfirstName()) << "|"
		<< std::setw(10) << this->display(_contacts[index].getlastName()) << "|"
		<< std::setw(10) << this->display(_contacts[index].getnickName()) << "|" << std::endl;
		index++;
	}
	std::cout << " -------------------------------------------" << std::endl;
	std::cout << "Enter the index of the contact you want to display: " << std::endl;
	std::getline(std::cin, input);
	displayContact(input);
}
