/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cruiz-de <cruiz-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:58:04 by cruiz-de          #+#    #+#             */
/*   Updated: 2022/03/15 12:28:27 by cruiz-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar() : _value("0"), _int(0), _float(0), _char('0'), _double(0)
{
}

Scalar::Scalar(const std::string &value) : _value(value), _int(0), _float(0), _char('0'), _double(0)
{
	this->_type = checkType();
	castValues();
}

Scalar::Scalar(const Scalar &copy) : _value(copy._value), _int(copy._int), _float(copy._float), _char(copy._char), _double(copy._double)
{
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
}

bool Scalar::isInt(std::string value)
{
	for (int i = 0; value[i]; i++) {
		if (isdigit(value[i]) == 0 && value[i] != '-' && value[i] != '+')
			return false;
	}
	if (std::stol(_value) > 2147483647 || std::stol(_value) < -2147483647)
		return false;
	return true;
}

bool Scalar::isChar(std::string value)
{
	if (_char > std::numeric_limits<char>::max() || _char < std::numeric_limits<char>::min())
		return false;
	if (value.length() == 1 && std::isprint(value[0]))
		return (true);
	return (false);
}

bool Scalar::isFloat(std::string value)
{

	if (value.find('.') != std::string::npos && value[value.length() - 1] == 'f' && value.find('f') == value.length() - 1 && value.length() > 2)
		return (true);
	return (false);
}

bool Scalar::isDouble(std::string value)
{
	if (value.find('.') != std::string::npos && value[value.length() - 1] != 'f' && value.find('f') == std::string::npos  && value.find('f') != value.length() - 1 && value.length() > 2)
		return (true);
	return (false);
}

bool Scalar::isPseudo(std::string value)
{
	if (value == "inf" || value == "inff" || value == "nan" || value == "nanf"||
        value == "+inf" || value == "+inff" || value == "-inf" || value == "-inff")
		return true;
	return false;
}

void	Scalar::castValues()
{
	switch (_type)
	{
		case CHAR:
		{
			_int = static_cast<int>(_char);
			_float = static_cast<float>(_char);
			_double = static_cast<double>(_char);
            break;
		}
		case INT:
		{
			_char = static_cast<float>(_int);
			_float = static_cast<float>(_int);
			_double = static_cast<double>(_int);
            break;
		}
		case FLOAT:
		{
			_int = static_cast<int>(_float);
			_char = static_cast<float>(_float);
			_double = static_cast<double>(_float);
            break;
		}
		case DOUBLE:
		{
			_int = static_cast<int>(_double);
			_float = static_cast<float>(_double);
			_char = static_cast<float>(_double);
			break;
		}
		case ERROR: 
		{
            _value = "impossible";
            break;
        }
	}
}

Scalar::ScalarType Scalar::checkType()
{
	if (isInt(_value))
	{
		_int = std::stoi(_value);
		return (Scalar::INT);
	}
	else if (isChar(_value))
	{
		_char = _value[0];
		return (Scalar::CHAR);
	}
	else if (isFloat(_value))
	{
		_float = std::stof(_value);
		return (Scalar::FLOAT);
	}
	else if (isDouble(_value) || isPseudo(_value))
	{
		_double = std::stod(_value);
		return (Scalar::DOUBLE);
	}
	else
		return (ERROR);
}

void	Scalar::printChar()
{
	std::cout << "char: ";
    if (_type == ERROR || isPseudo(_value))
        std::cout << "impossible";
	else if (_char < 32 || _char > 126)
		std::cout << "Non displayable";
	else
        std::cout << "'" << _char << "'";
    std::cout << std::endl;
}

void	Scalar::printInt()
{    
	std::cout << "int: ";
	if (_type == ERROR || isPseudo(_value))
        std::cout << "impossible";
	else
        std::cout << _int;
    std::cout << std::endl;
}

void	Scalar::printFloat()
{
	std::cout << "float: ";
    if (_type == ERROR)
        std::cout << "impossible";
    else
        std::cout << std::fixed << std::setprecision(1) << _float << "f";
    std::cout << std::endl;
}

void	Scalar::printDouble()
{
	std::cout << "double: ";
    if (_type == ERROR)
	{
        std::cout << "impossible" << std::endl;
		return;
	}
    if (_value == "+inf")
        std::cout << "+";
    std::cout << std::fixed << std::setprecision(1) << _double;
    std::cout << std::endl;
}
