#pragma once

#include <algorithm>
#include <exception>
#include <iostream>

template <typename T>

bool easyfind(T& container, int value)
{
	if (std::find(container.begin(), container.end(), value) != container.end())
		return true;
	else
		throw std::exception();
}