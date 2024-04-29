/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:11:39 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/25 15:47:14 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int					_fixedNumber;
		static const int	_fractionalNumber = 8;

	public:

		Fixed (void); // constructeur default
		~Fixed(void);
		Fixed (const int rdrInt);
		Fixed (const float rdrFloat);
		Fixed(Fixed const &src); // constructeur copy

		Fixed &operator=(Fixed const &rhs); // constructeur assignation

		int		getRawBits(void) const;
		void	setRawBits(int const bit);

		float	toFloat( void ) const;
		int		toInt( void ) const;

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int more);
		Fixed operator--(int less);

		static Fixed			&min(Fixed &ref1, Fixed &ref2);
		static Fixed const		&min(const Fixed &ref1, const Fixed &ref2);
		static Fixed			&max(Fixed &ref1, Fixed &ref2);
		static Fixed const		&max(const Fixed &ref1, const Fixed &ref2);

};

std::ostream &operator<<(std::ostream & out, Fixed const & rhs);

#endif
