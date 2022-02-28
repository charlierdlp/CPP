/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:58:04 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/02/24 19:43:22 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() : _value("0"), _int(0), _float(0), _char('0'), _double(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Scalar::Scalar(const std::string &value) : _value(value), _int(0), _float(0), _char('0'), _double(0)
{
	std::cout << "Constructor called" << std::endl;
	this->_type = checkType();
}

Scalar::Scalar(const Scalar &copy) : _value(copy._value), _int(copy._int), _float(copy._float), _char(copy._char), _double(copy._double)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_type = copy._type;
}

Scalar &Scalar::operator=(const Scalar &scalar)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = scalar._value;
	this->_int = scalar._int;
	this->_float = scalar._float;
	this->_char = scalar._char;
	this->_double = scalar._double;
	this->_type = scalar._type;
	return (*this);
}

Scalar::~Scalar(void)
{
	std::cout << "Destructor called" << std::endl;
}

bool Scalar::isInt(std::string value)
{}

bool Scalar::isChar(std::string value)
{
	if (value.length() == 1 && std::isprint(value[0]))
		return (true);
	return (false);
}

bool Scalar::isFloat(std::string value)
{
	if (value.find('.') != std::string::npos && value[value.length() - 1] == 'f')
		return (true);
	return (false);
}

bool Scalar::isDouble(std::string value)
{
	if (value.find('.') != std::string::npos && value[value.length() - 1] != 'f')
		return (true);
	return (false);
}

Scalar::ScalarType Scalar::checkType()
{
	if (isInt(_value))
		return (INT);
	else if (isFloat(_value))
		return (FLOAT);
	else if (isChar(_value))
		return (CHAR);
	else if (isDouble(_value))
		return (DOUBLE);
	return (ERROR);
}