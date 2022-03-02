#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, int size, void (*func)(T const &))
{
	for (int i = 0; i < size; i++)
		func(array[i]);
}

template <typename T>
void print(const T &value)
{
	std::cout << value << std::endl;
}

template <typename T>
void oneUp(T &value)
{
	value++;
}