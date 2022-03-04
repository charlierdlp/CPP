/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:45 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/04 12:32:09 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, int size, void (*func)(T const &e))
{
	for (int i = 0; i < size; i++)
		func(array[i]);
}

template <typename T>
void print(T const &value)
{
	std::cout << value << std::endl;
}
