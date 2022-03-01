/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:35:34 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/01 20:07:26 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//https://stackoverflow.com/questions/332030/when-should-static-cast-dynamic-cast-const-cast-and-reinterpret-cast-be-used
//https://en.cppreference.com/w/cpp/language/reinterpret_cast

#include <stdint.h>
#include <iostream>

struct Data
{
	int i;
	char c;
	float f;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main ()
{
	Data data;
	Data *ptr;
	uintptr_t raw;

	data.i = 42;
	data.c = 'a';
	data.f = 3.14;

	std::cout << "data.i = " << data.i << std::endl;
	std::cout << "data.c = " << data.c << std::endl;
	std::cout << "data.f = " << data.f << std::endl;
	std::cout << "----------------------------" << std::endl;
	raw = serialize(&data);
	ptr = deserialize(raw);
	std::cout << "ptr->i = " << ptr->i << std::endl;
	std::cout << "ptr->c = " << ptr->c << std::endl;
	std::cout << "ptr->f = " << ptr->f << std::endl;

	return 0;
}