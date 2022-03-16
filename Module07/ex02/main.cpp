/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:59:05 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 20:04:22 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
 Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << numbers[i] << std::endl;
	}

	delete [] mirror;//
	return 0;

	/* std::cout << "Empty array test:" << std::endl;
	try
	{
		Array<int> Empty;
		std::cout << Empty[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Array is empty." << std::endl;
	}

	std::cout << std::endl;

	std::cout << "Int array test:" << std::endl;
	Array<int> test1(5);
	for (int i = 0; i < 5; i++)
	{
		const int value = (rand() % 10) + 1;
		test1[i] = value;
		std::cout << test1[i] << std::endl;
	}
	std::cout << "Int array size: " << test1.size() << std::endl;
	std::cout << std::endl;

	Array<float> test2(6);
	for (int i = 0; i < 6; i++)
	{
		const float value = (rand() % 10) + 0.42;
		test2[i] = value;
		std::cout << test2[i] << std::endl;
	}
	std::cout << "Float array size: " << test2.size() << std::endl;
	std::cout << std::endl;

	std::cout << "Char array test:" << std::endl;
	Array<char> character(4);
	character[0] = 'a';
	character[1] = 'b';
	character[2] = 'c';
	character[3] = 'd';
	for (int i = 0; i < 4; i++)
		std::cout << character[i] << std::endl;
	std::cout << "Char array size: " << character.size() << std::endl;
 */
}