/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:03:47 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/24 15:38:31 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int rdrInt)
{
	std::cout << "Int constructor called" << std::endl;
	_fixedNumber = rdrInt << _fractionalNumber;
}

Fixed::Fixed(const float rdrFloat)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedNumber = roundf(rdrFloat * (1 << _fractionalNumber));
}

Fixed::Fixed (Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	_fixedNumber = rhs.getRawBits();

	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "It's ";

	return (_fixedNumber);
}

void Fixed::setRawBits(int const bit)
{
	std::cout << "setRawBits member function called" << std::endl;
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

std::ostream &operator<<(std::ostream & out, Fixed const & rhs)
{
	out << rhs.toFloat();

	return (out);
}
