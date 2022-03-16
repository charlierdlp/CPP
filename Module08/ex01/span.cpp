/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:02:46 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 12:02:47 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N) : _N(N)
{
	_vector.reserve(N);
}

Span::Span(Span const &src) : _N(src._N), _vector(src._vector)
{
}

Span &Span::operator=(Span const &span)
{
	if (this != &span)
	{
		_N = span._N;
		_vector = span._vector;
	}
	return *this;
}

Span::~Span(){}

void Span::addNumber(int n)
{
	if (_vector.size() < _N)
		_vector.push_back(n);
	else
		throw Span::SpanFullException();
}

int Span::shortestSpan()
{
	if (_vector.size() < 2)
		throw Span::SpanEmptyException();
	int min = INT_MAX;
	for (unsigned int i = 0; i < _vector.size() - 1; i++)
	{
		for (unsigned int j = i + 1; j < _vector.size(); j++)
		{
			if (std::abs(_vector[i] - _vector[j]) < min)
				min = std::abs(_vector[i] - _vector[j]);
		}
	}
	return min;
}

int Span::longestSpan()
{
	int longest = 0;
	if (_vector.size() < 2)
		throw Span::SpanEmptyException();
	for (unsigned int i = 0; i < _vector.size() - 1; i++)
	{
		for (unsigned int j = i + 1; j < _vector.size(); j++)
		{
			int span = _vector[j] - _vector[i];
			if (span > longest)
				longest = span;
		}
	}
	return longest;

}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (_vector.size() < _N)
	{
		for (std::vector<int>::iterator it = begin; it != end; it++)
		{
			_vector.push_back(*it);
		}
	}
	else
		throw Span::SpanFullException();
}

void Span::add_random(int n)
{
	for(int i = 0; i < n; i++)
	{
		int random = rand() % 100;
		addNumber(random);
		if (_vector.size() == _N)
			break;
	}
}