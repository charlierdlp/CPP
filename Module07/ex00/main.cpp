/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:36 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 19:14:12 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.hpp"


int main()
{
 	/* int x = 42;
	int y = 24;
	float j = 42.42;
	float k = 24.24;

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "j = " << j << std::endl;
	std::cout << "k = " << k << std::endl;

	std::cout << std::endl;

	::swap(x, y);
	::swap(j, k);
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "j = " << j << std::endl;
	std::cout << "k = " << k << std::endl;
	std::cout << "min = " << ::min(x, y) << std::endl;
	std::cout << "max = " << ::max(x, y) << std::endl;
	std::cout << "min = " << ::min(j, k) << std::endl;
	std::cout << "max = " << ::max(j, k) << std::endl; */

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}