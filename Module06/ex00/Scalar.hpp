/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:16:51 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/01 19:19:46 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>

class	Scalar
{

	public:
		Scalar(void);
		Scalar(const std::string &value);
		Scalar(const Scalar &copy);
		~Scalar(void);
		Scalar	&operator=(const Scalar &calar);

		typedef enum ScalarType
		{
			INT,
			FLOAT,
			CHAR,
			DOUBLE,
			ERROR
		}				ScalarType;

		ScalarType		checkType();
		bool			isInt(std::string value);
		bool			isFloat(std::string value);
		bool			isChar(std::string value);
		bool			isDouble(std::string value);
		bool			isPseudo(std::string value);
		void			castValues();
		void			printInt(void);
		void			printFloat(void);
		void			printChar(void);
		void			printDouble(void);

	private:
		std::string		_value;
		int				_int;
		float			_float;
		char			_char;
		double			_double;
		ScalarType		_type;
};

