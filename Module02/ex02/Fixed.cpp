#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(int const integer) : _value(integer * (1 << this->_bits))
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const float_n) : _value(roundf(float_n * (1 << this->_bits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


float Fixed::toFloat(void) const
{
	return ((float)(this->_value) / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const
{
	return (this->_value / (1 << this->_bits));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	//std::cout << "Assignation operator called"<< std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}
std::ostream &operator<<(std::ostream &output, Fixed const &num)
{
	output << num.toFloat();
	return (output);
}

bool	Fixed::operator>(const Fixed &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return(*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	result(*this);

	operator++();
	return(result);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result(*this);

	operator++();
	return(result);
}

Fixed	Fixed::operator+(const Fixed &fixed)
{
	Fixed	result;

	result.setRawBits(this->_value + fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &fixed)
{
	Fixed	result;

	result.setRawBits(this->_value - fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &fixed)
{
	Fixed	result;

	result.setRawBits(this->_value * fixed.getRawBits() >> this->_bits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &fixed)
{
	Fixed	result;

	result.setRawBits((this->_value << this->_bits) / fixed.getRawBits());
	return(result);
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2)
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}
