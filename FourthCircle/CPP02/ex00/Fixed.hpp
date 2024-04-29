/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:56:35 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/24 13:23:42 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP


#include <iostream>

class Fixed
{
	private:
		int					_fixedNumber;
		static const int	_fractionalNumber = 8;

	public:

		int     getRawBits(void) const;
		void    setRawBits(int const bit);

		Fixed (void); // constructeur default
		Fixed(Fixed const & src); // constructeur copy
		~Fixed(void);

		Fixed &operator=(Fixed const & rhs); // constructeur assignation

};

#endif
