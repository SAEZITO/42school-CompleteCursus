/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:56:35 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/24 16:06:47 by alsaez           ###   ########.fr       */
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

		int		getRawBits(void) const;
		void	setRawBits(int const bit);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed			&min(Fixed &ref1, Fixed &ref2);
		static Fixed const		&min(const Fixed &ref1, const Fixed &ref2);
		static Fixed			&max(Fixed &ref1, Fixed &ref2);
		static Fixed const		&max(const Fixed &ref1, const Fixed &ref2);


		Fixed (void); // constructeur default
		Fixed (const int rdrInt);
		Fixed (const float rdrFloat);
		Fixed(Fixed const & src); // constructeur copy
		~Fixed(void);

		Fixed &operator=(Fixed const & rhs); // constructeur assignation

		bool operator>(Fixed const & rhs);
		bool operator<(Fixed const & rhs);
		bool operator>=(Fixed const & rhs);
		bool operator<=(Fixed const & rhs);
		bool operator==(Fixed const & rhs);
		bool operator!=(Fixed const & rhs);

		Fixed operator+(Fixed const & rhs);
		Fixed operator-(Fixed const & rhs);
		Fixed operator*(Fixed const & rhs);
		Fixed operator/(Fixed const & rhs);

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int more);
		Fixed operator--(int less);

};

std::ostream &operator<<(std::ostream & out, Fixed const & rhs);

#endif
