/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:02:41 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 12:02:42 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::vector<int> vector;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	for (int i = 0; i < 10042; i++)
		vector.push_back(i);
	Span sp2 = Span(vector.size());
	sp2.addRange(vector.begin(), vector.end());

	//std::cout << sp2.shortestSpan() << std::endl;
	//std::cout << sp2.longestSpan() << std::endl;

}