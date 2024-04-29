/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:45:04 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 17:02:16 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Test :" << i + 1 << std::endl;
		Base* ptr = generate();
		std::cout << "identify_from_pointer: ";
		identify(ptr);
		std::cout << std::endl << "identify_from_reference: ";
		identify(*ptr);
		std::cout << std::endl;
		delete ptr;
	}
	std::cout << "Test : 11" << std::endl;
	Base *ptr = new Base;
	std::cout << "identify_from_pointer: ";
	identify(ptr);
	std::cout << std::endl << "identify_from_reference: ";
	identify(*ptr);
	std::cout << std::endl;
	delete ptr;

	return (0);
}
