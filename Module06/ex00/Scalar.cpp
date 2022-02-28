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

void	Scalar::castValues()
{
	if (_type != INT)
		_int = static_cast<int>(_int);
	if (_type != FLOAT)
		_float = static_cast<float>(_float);
	if (_type != CHAR)
		_char = static_cast<char>(_char);
	if (_type != DOUBLE)
		_double = static_cast<double>(_double);
}

Scalar::ScalarType Scalar::checkType()
{
	if (isChar(_value))
	{
		_char = _value[0];
		return (Scalar::CHAR);
	}
	else if (isFloat(_value))
	{
		_float = std::stof(_value);
		return (Scalar::FLOAT);
	}
	else if (isDouble(_value))
	{
		_double = std::stod(_value);
		return (Scalar::DOUBLE);
	}
	else if (isInt(_value))
	{
		_int = std::stoi(_value);
		return (Scalar::INT);
	}
	else
		return (ERROR);
	castValues();
}

void	Scalar::printInt()
{
	std::cout << "Int: " << _int << std::endl;
}

void	Scalar::printFloat()
{
	std::cout << "Float: " << _float << std::endl;
}

void	Scalar::printDouble()
{
	std::cout << "Double: " << _double << std::endl;
}

void	Scalar::printChar()
{
	std::cout << "Char: " << _char << std::endl;
}