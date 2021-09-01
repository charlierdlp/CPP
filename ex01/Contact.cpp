/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:38:22 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/09/01 20:12:04 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

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