/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:22:55 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 14:03:53 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &cpy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = cpy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal constructor by assignation called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << this->type << " say : i don't know what is the typical wrong animal sound..." << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return ("My type is " + this->type);
}
