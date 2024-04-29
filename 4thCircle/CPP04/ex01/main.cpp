/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:10:30 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 15:38:56 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* animal[10];

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		std::cout << std::endl;
	}

	for (int i = 0; i < 10; i++)
		animal[i]->makeSound();

	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete animal[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;

	return 0;
}
