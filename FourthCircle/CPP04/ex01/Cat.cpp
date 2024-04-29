/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:39 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 15:37:37 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat::Cat(Cat &cpy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = cpy;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Assignation Operator called" << std::endl;
	this->type = rhs.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*rhs.getBrain());
	return (*this);
}

std::string Cat::getType( void ) const
{
	return ("My type is" + this->type);
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaouuuuuuu!" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}
