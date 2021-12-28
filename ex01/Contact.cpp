/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:38:22 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/28 20:34:00 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void    Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void    Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void    Contact::setNickName(std::string nickname)
{
    this->_nickname = nickname;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getfirstName()
{
    return(this->_firstName);
}

std::string Contact::getlastName()
{
    return(this->_lastName);
}

std::string Contact::getnickName()
{
    return(this->_nickname);
}

std::string Contact::getphoneNumber()
{
    return(this->_phoneNumber);
}

std::string Contact::getdarkestSecret()
{
    return(this->_darkestSecret);
}

/*
Contact addContact(void)
{
    Contact new_contact;
    std::string tmp;

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
    return (new_contact);
}
*/