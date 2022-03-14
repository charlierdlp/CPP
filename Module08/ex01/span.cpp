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
	int shortest = _vector[1] - _vector[0];
	for (unsigned int i = 0; i < _vector.size() - 1; i++)
	{
		int span = _vector[i + 1] - _vector[i];
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

int Span::longestSpan()
{
	if (_vector.size() < 2)
		throw Span::SpanEmptyException();
	int longest = _vector[_vector.size() - 1] - _vector[0];
	for (unsigned int i = 0; i < _vector.size() - 1; i++)
	{
		int span = _vector[i + 1] - _vector[i];
		if (span > longest)
			longest = span;
	}
	return longest;
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