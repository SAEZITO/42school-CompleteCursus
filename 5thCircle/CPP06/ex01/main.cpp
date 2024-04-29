/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:42 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:39:24 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int	main(void)
{
	Data data;

	data = Data(42);

	uintptr_t raw = Serializer::Serialize(&data);
	Data	*ptr = Serializer::Deserialize(raw);

	std::cout << "Raw pointer : " << &data << std::endl;
	std::cout << "Data pointer : " << ptr << std::endl;

	std::cout << "Data info:   " << data.info << std::endl;
	std::cout << "Ptr info:    " << ptr->info << std::endl;

	return 0;
}
