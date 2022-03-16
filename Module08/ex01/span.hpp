/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:02:52 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 12:02:53 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <exception>
#include <iostream>

class Span
{
	private:
		unsigned int _N;
		std::vector<int> _vector;

	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void add_random(int n);
	
	class SpanFullException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Vector is full!");
			}
	};

	class SpanEmptyException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Vector is empty or has only one element!");
			}
	};
};