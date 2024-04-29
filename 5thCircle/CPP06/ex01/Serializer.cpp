/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:34:33 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:34:57 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(Serializer const &ref)
{
	*this = ref;
}

Serializer& Serializer::operator=(Serializer const &ref)
{
	if (this != &ref) {}
	return (*this);
}

uintptr_t	Serializer::Serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::Deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
