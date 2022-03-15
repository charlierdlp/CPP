/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:59:00 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 19:45:52 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T* _data;

	public:
		Array() : _size(0), _data(NULL) {}
		Array(unsigned int n) : _size(n), _data(new T[n]){}
		Array(const Array & other) : _size(other._size), _data(new T[other._size])
		{
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = other._data[i];
		}
		~Array()
		{
			delete[] _data;
		}
		Array &operator=(const Array & other)
		{
			if (this != &other)
			{
				delete[] _data;
				_size = other._size;
				_data = new T[other._size];
				for (unsigned int i = 0; i < _size; i++)
					_data[i] = other._data[i];
			}
			return *this;
		}
		T &operator[](unsigned int i)
		{
			if (i >= _size || i < 0)
				throw IndexOutOfBounds();
			return _data[i];
		}

		class IndexOutOfBounds: public std::exception
		{
        	const char * what() const throw() { 
            	return "Array index out of bounds";
        }
    };
};