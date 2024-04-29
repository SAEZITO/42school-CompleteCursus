/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:28 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 15:51:17 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Constructor called" << std::endl;
	this->type = "AAnimal";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal &cpy)
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	*this = cpy;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "AAnimal Assignation Operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string AAnimal::getType( void ) const
{
	return ("My type is" + this->type);
}

void AAnimal::makeSound( void ) const
{
	std::cout << "AAnimal Sound" << std::endl;
}
