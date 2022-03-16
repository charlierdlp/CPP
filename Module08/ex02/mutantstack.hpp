/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:03:03 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 12:03:03 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

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

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{ 
		return std::stack<T>::c.begin();
	}
	
	iterator end()
	{
		return std::stack<T>::c.end();
	}

};