/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:58:40 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/04 11:58:40 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const &min(T &x, T &y)
{
	if (x < y)
		return x;
	return y;
}

template <typename T>
T const &max(T &x, T &y)
{
	if (x > y)
		return x;
	return y;
}
