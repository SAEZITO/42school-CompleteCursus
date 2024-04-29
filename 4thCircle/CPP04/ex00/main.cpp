/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:10:30 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 14:57:05 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << std::endl;
	std::cout << "types called" << std::endl;
	std::cout << std::endl;

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << meta->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "sounds called" << std::endl;
	std::cout << std::endl;

	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "above we have logical cound of animal... and now..." << std::endl;
	std::cout << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongCat* werecat = new WrongCat();

	std::cout << std::endl;
	std::cout << "wrong types called" << std::endl;
	std::cout << std::endl;

	std::cout << wmeta->getType() << std::endl;
	std::cout << werecat->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "wrong sounds called" << std::endl;
	std::cout << std::endl;

	wmeta->makeSound();
	werecat->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete werecat;

	return 0;
}
