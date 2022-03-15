/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:50 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 19:16:50 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int nums[] = {0, 1, 2, 3, 4};
	float floats[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char chars[] = {'a', 'b', 'c', 'd', 'e'};
	std::string strings[] = {"one", "two", "three", "four", "five"};

	std::cout << "nums: " << std::endl;
	iter(nums, 4, print);
	std::cout << "floats: " << std::endl;
	iter(floats, 4, print);
	std::cout << "chars: " << std::endl;
	iter(chars, 5, print);
	std::cout << "strings: " << std::endl;
	iter(strings, 5, print);

	return 0;
}