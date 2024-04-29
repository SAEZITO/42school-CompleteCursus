/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:22:46 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 14:04:01 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat &cpy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = cpy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat constructor by assignation called" << std::endl;
	this->type = rhs.type;
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << this->type << " say : Mi a ouuuuuuuuu, i'm a werecat !" << std::endl;
}

std::string WrongCat::getType( void ) const
{
	return ("My type is " + this->type);
}
