/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:44:33 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/15 12:47:50 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
void iter(T *array, int length, void (*f)(T const &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template< typename T>
void	display(T const &t)
{
	std::cout << t << " ";
}
