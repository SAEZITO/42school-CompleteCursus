/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:03:47 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/24 16:06:23 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedNumber = 0;
}

Fixed::Fixed(const int rdrInt)
{
	_fixedNumber = rdrInt << _fractionalNumber;
}

Fixed::Fixed(const float rdrFloat)
{
	_fixedNumber = roundf(rdrFloat * (1 << _fractionalNumber));
}

Fixed::Fixed (Fixed const & src)
{
	*this = src;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
	_fixedNumber = rhs._fixedNumber;

	return (*this);
}

Fixed::~Fixed()
{
}

bool Fixed::operator>(Fixed const & rhs)
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const & rhs)
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & rhs)
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const & rhs)
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const & rhs)
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const & rhs)
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator++()
{
	_fixedNumber += 1.0;
	return (*this);
}

Fixed &Fixed::operator--()
{
	_fixedNumber -= 1.0;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	temp._fixedNumber = _fixedNumber++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);

	temp._fixedNumber = _fixedNumber--;
	return (temp);
}

int Fixed::getRawBits(void) const
{
	return (_fixedNumber);
}

void Fixed::setRawBits(int const bit)
{
	_fixedNumber = bit;
}

float Fixed::toFloat() const
{
	return (((float)_fixedNumber) / (1 << _fractionalNumber));
}

int Fixed::toInt() const
{
	return (_fixedNumber >> _fractionalNumber);
}

Fixed &Fixed::min( Fixed &ref1, Fixed &ref2 )
{
	if (ref1.toFloat() < ref2.toFloat())
		return ref1;
	return ref2;
}

const Fixed &Fixed::min( const Fixed &ref1, const Fixed &ref2 )
{
	if (ref1.toFloat() < ref2.toFloat())
		return ref1;
	return ref2;
}

Fixed &Fixed::max( Fixed &ref1, Fixed &ref2 )
{
	if (ref1.toFloat() > ref2.toFloat())
		return ref1;
	return ref2;
}

const Fixed &Fixed::max( const Fixed &ref1, const Fixed &ref2 )
{
	if (ref1.toFloat() > ref2.toFloat())
		return ref1;
	return ref2;
}

std::ostream &operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();

	return (out);
}
