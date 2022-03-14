#pragma once

#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}
		MutantStack(MutantStack const &src) : std::stack<T>(src) {}
		MutantStack &operator=(MutantStack const &stack)
		{
			if (this != &stack)
				std::stack<T>::operator=(stack);
			return *this;
		}
};