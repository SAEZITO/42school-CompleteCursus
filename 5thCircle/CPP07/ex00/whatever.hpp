/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:03:44 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/15 12:21:23 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
void	swap(T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template< typename T >
T const &min(T const &x, T const &y)
{
	return (x<y ? x : y);
}

template< typename T >
T const &max(T const &x, T const &y)
{
	return (x>y ? x : y);
}

#endif
