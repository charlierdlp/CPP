/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:02:41 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/17 17:36:42 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(10);

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(Span::SpanEmptyException &e)
	{
		std::cout << e.what() << std::endl;
	}

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(6);
	sp.addNumber(1);
	sp.addNumber(7);
	sp.addNumber(90);
	sp.addNumber(22);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(42);
	}
	catch(Span::SpanFullException &e)
	{
		std::cout << e.what() << std::endl;
	}
	

	std::vector<int> vector;
	for (int i = 0; i < 10042; i++)
		vector.push_back(i);
	Span sp2 = Span(vector.size());
	sp2.addRange(vector.begin(), vector.end());

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

}