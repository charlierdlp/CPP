#include "span.hpp"

int main()
{
	Span sp1 = Span(5);
	Span sp2 = Span(50);

	sp1.addNumber(1);
	sp1.addNumber(2);
	sp1.addNumber(3);
	sp1.addNumber(4);
	sp1.addNumber(5);

	sp2.add_random(50);

	//std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
}