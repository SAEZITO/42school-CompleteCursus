/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:16:55 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/16 14:23:05 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>

template<typename T>
int easyfind(T &container, int value)
{
	typename T::const_iterator it;
	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return (*it);
	else
		throw std::exception();
}
