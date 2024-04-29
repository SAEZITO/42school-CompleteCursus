/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:01:10 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:45:39 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	if (0)
		std::cout << "[Cure] default constructor called" << std::endl;
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	if (0)
		std::cout << "[Cure] default constructor called" << std::endl;
}

Cure::Cure(Cure const &input) : AMateria("Cure_copy")
{
	*this = input;
	if (0)
		std::cout << "[Cure] copy constructor called" << std::endl;
}

Cure const &Cure::operator=(Cure const &input)
{
	this->_type = input._type;
	if (0)
		std::cout << "[Cure] assignement constructor called" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	if (0)
		std::cout << "[Cure] destructor called" << std::endl;
}

std::string const &Cure::getType(void) const
{
	return (this->_type);
}

AMateria *Cure::clone(void) const
{
	return (new Cure("cure"));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
