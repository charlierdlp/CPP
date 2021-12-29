/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:06:36 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/12/29 14:08:54 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
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
};