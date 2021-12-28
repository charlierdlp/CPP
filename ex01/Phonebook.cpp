/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:44:40 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/28 21:13:01 by cruiz-de         ###   ########.fr       */
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
    int count = 0;
                             //poner contador para saber cuantos hay
    for (int i=0; i <= 8; i++)
        _contacts[count++];
        printf("%d\n", count);
    std::cout << "First name: ";
    std::cin >> tmp;
    new_contact.setFirstName(tmp);
    std::cout << "Last name: ";
    std::cin >> tmp;
    new_contact.setLastName(tmp);
    std::cout << "Nickname: ";
    std::cin >> tmp;
    new_contact.setNickName(tmp);
    std::cout << "Phone number: ";
    std::cin >> tmp;
    new_contact.setPhoneNumber(tmp);
    std::cout << "Darkest secret: ";
    std::cin >> tmp;
    new_contact.setDarkestSecret(tmp);
    std::cout << std::endl << "Contact saved succesfully" << std::endl;
    _contacts[0] = new_contact;
}

void Phonebook::searchContact()
{
    //print contacts
    std::cout << this->_contacts[0].getfirstName() << std::endl;
}
