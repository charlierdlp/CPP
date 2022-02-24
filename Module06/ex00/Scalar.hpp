/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:16:51 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/24 19:42:22 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Scalar
{
	private:
		int				_int;
		float			_float;
		std::string 	_char;
		double			_double;

	public:
		Scalar(char *arg);
		Scalar(const Scalar &copy);
		~Scalar(void);
		Scalar	&operator=(const Scalar &calar);
};

