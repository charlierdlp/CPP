/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:06:36 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/01/04 22:17:05 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <unistd.h>
#include <sstream>

class Phonebook
{
    private:
	    Contact _contacts[8];
	    int		   index;
	    int		   count;
    
    public:
	    Phonebook();
	    ~Phonebook();
	    void addContact();
	    void searchContact();
		bool isNumber(std::string str);
	    std::string	display(std::string str);
	    void displayContact(std::string input, int index);
};