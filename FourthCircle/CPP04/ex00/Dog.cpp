/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:34 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 13:58:51 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(Dog &cpy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Assignation Operator called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string Dog::getType( void ) const
{
	return ("My type is" + this->type);
}

void Dog::makeSound( void ) const
{
	std::cout << "Wouafff!" << std::endl;
}
