/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:59:38 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:33:35 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
	if (0)
		std::cout << "[AMateria] type constructor called type= " << type << std::endl;
}

AMateria::AMateria(AMateria const & input)
{
	*this = input;
	if (0)
		std::cout << "[AMateria] copy constructor called" << std::endl;
}

AMateria const &AMateria::operator=(AMateria const & input)
{
	this->_type = input._type;
	if (0)
		std::cout << "[AMateria] assignement constructor called" << std::endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	if (0)
		std::cout << "[AMateria] destructor called" << std::endl;
}

std::string	const &AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	(void) target;
}
