/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:28 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 13:58:28 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal &cpy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = cpy;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal Assignation Operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string Animal::getType( void ) const
{
	return ("My type is" + this->type);
}

void Animal::makeSound( void ) const
{
	std::cout << "Animal Sound" << std::endl;
}
