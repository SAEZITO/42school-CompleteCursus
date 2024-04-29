/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:00:47 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:47:25 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	if (0)
		std::cout << "[Ice] default constructor called" << std::endl;
}

Ice::Ice(std::string const &type) : AMateria(type)
{
	if (0)
		std::cout << "[Ice] default constructor called" << std::endl;
}

Ice::Ice(Ice const &input) : AMateria("ice_copy")
{
	*this = input;
	if (0)
		std::cout << "[Ice] copy constructor called" << std::endl;
}

Ice const &Ice::operator=(Ice const &input)
{
	this->_type = input._type;
	if (0)
		std::cout << "[Ice] assignement constructor called" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	if (0)
		std::cout << "[Ice] destructor called" << std::endl;
}

std::string const &Ice::getType(void) const
{
	return (this->_type);
}

AMateria *Ice::clone(void) const
{
	return (new Ice("ice"));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
