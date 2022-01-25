#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(int const integer);
		Fixed(float const float_num);
		~Fixed(); 

		Fixed	&operator=(const Fixed &fixed);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	operator+(const Fixed &fixed);
		Fixed	operator-(const Fixed &fixed);
		Fixed	operator*(const Fixed &fixed);
		Fixed	operator/(const Fixed &fixed);

		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		static const	Fixed &max(const Fixed &n1, const Fixed &n2);
		static const	Fixed &min(const Fixed &n1, const Fixed &n2);

		int		getRawBits(void) const;
		void	setRawBits (int const raw);
		float	toFloat(void) const;
		int		toInt(void) const; 
};

std::ostream &operator<<(std::ostream &output, Fixed const &num);