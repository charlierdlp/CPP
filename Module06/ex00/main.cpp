/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:35:59 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/28 10:36:01 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://stackoverflow.com/questions/103512/why-use-static-castintx-instead-of-intx

#include "Scalar.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments! " << std::endl;
		return 1;
	}
	Scalar	conversion(argv[1]);

	conversion.printInt();
	conversion.printFloat();
	conversion.printChar();
	conversion.printDouble();
	
	return 0;
}