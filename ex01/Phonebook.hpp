/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:06:36 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/28 19:00:37 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>
#include <string>

class Phonebook
{
    private:
            Contact _contacts[8];
    
    public:
            Phonebook();
            ~Phonebook();
            void addContact();
            void searchContact();
            Contact     getContacts() const;
};