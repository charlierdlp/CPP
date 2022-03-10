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