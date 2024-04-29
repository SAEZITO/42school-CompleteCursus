/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:32:32 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:36:56 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : info (0) {}

Data::Data(int imput) : info (imput) {}

Data::~Data() {}

Data::Data(Data const &ref)
{
	*this = ref;
}

Data& Data::operator=(Data const &ref)
{
	if (this != &ref)
	{
		this->info = ref.info;
	}
	return (*this);
}
