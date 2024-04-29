/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:05:58 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:56:09 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	if (0)
		std::cout << "[MateriaSource] default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &input)
{
	*this = input;
	if (0)
		std::cout << "[MateriaSource] copy constructor called" << std::endl;
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &input)
{
	for (int i = 0; i < 4; i++)
	{
		if (input._inventory[i] != NULL)
		{
			this->_inventory[i] = input._inventory[i]->clone();
			if (0)
				std::cout << "[MateriaSource] copied " << input._inventory[i]->getType() << "" << std::endl;
		}
		else
			this->_inventory[i] = NULL;
	}
	if (0)
		std::cout << "[MateriaSource] assignement constructor called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete _inventory[i];
	}
	if (0)
		std::cout << "[MateriaSource] destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << "MateriaSource just learn " << m->getType() << " at inventory[" << i << "]" << std::endl;
			m = NULL;
			break ;
		}
	}
	if (m != NULL)
	{
		std::cout << "MateriaSource tried to learn " << m->getType() << " at a slot, but all are full! "
			<< m->getType() << " is lost forever!" << std::endl;
		delete m;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
		{
			return (this->_inventory[i]->clone());
		}
	}
	return (0);
}
