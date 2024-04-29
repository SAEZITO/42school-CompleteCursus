/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:36:16 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:36:41 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include <iostream>

struct	Data
{
	int	info;

	Data();
	Data(int input);
	~Data();
	Data(Data const &ref);
	Data &operator=(Data const &ref);
};
