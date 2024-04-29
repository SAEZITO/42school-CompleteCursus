/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:56:35 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/24 15:30:45 by alsaez           ###   ########.fr       */
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

		Fixed (void); // constructeur default
		Fixed (const int rdrInt);
		Fixed (const float rdrFloat);
		Fixed(Fixed const & src); // constructeur copy
		~Fixed(void);

		Fixed &operator=(Fixed const & rhs); // constructeur assignation

};

std::ostream &operator<<(std::ostream & out, Fixed const & rhs);

#endif
