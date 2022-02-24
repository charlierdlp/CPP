/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:58:04 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/24 19:43:22 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments! " << std::endl;
		return 1;
	}
	Scalar	conversion(argv[1]);
	
	return 0;
}