/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:51:44 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/01/04 21:03:59 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char  *volume (char *word)
{
    int i;

    i = 0;
    while (word[i])
    {
        word[i] = toupper(word[i]);
        i++;
    }
    return (word);
}

int main(int argc, char **argv)
{

    int i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        i = 1;
        while (argv[i])
        {
            
            std::cout << volume(argv[i]);;
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}