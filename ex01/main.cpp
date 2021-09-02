/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:25:58 by cruiz-de          #+#    #+#             */
/*   Updated: 2021/09/01 20:36:10 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    int menu;
    std::string input;

    menu = 1;
    while (menu)
    {
        std::cout << "|Phone book|" << std::endl;
        std::cout << "------------" << std::endl;
        std::cout << "Enter a valid option (ADD, SEARCH, EXIT)" << std::endl;
        std::cin >> input;
        if (!input.compare("ADD"))
        {
           //addContact();
        }
        else if (!input.compare("EXIT"))
            menu = 0;
        else 
           std::cout << "Invalid option" << std::endl; 
    }

    return (0);
}