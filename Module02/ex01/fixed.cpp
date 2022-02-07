#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const integer) : _value(integer * (1 << this->_bits))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const float_n) : _value(roundf(float_n * (1 << this->_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called"<< std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

float Fixed::toFloat(void) const
{
	return ((float)(this->_value) / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_bits));
}

std::ostream &operator<<(std::ostream &output, Fixed const &num)
{
	output << num.toFloat();
	return (output);
}
