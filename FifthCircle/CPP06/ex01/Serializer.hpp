/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:34 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:35:36 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stdint.h> //pour les uintptr_t
# include "Data.hpp"

class	Serializer
{
	private:

	protected:

	public:
	////// canonical form //////
	Serializer();
	~Serializer();
	Serializer(Serializer const &ref);
	Serializer &operator=(Serializer const &ref);

	static uintptr_t	Serialize(Data* ptr);
	static Data*		Deserialize(uintptr_t raw);
};
