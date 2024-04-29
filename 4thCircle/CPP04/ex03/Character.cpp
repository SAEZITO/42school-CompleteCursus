/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:05:05 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:54:59 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->_iFloor = -1;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_floor[i] = NULL;
	}
	if (0)
		std::cout << "[Character] name constructor called name= " << name << std::endl;
}

Character::Character(Character const &input)
{
	*this = input;
	this->_name = input._name + "_copy";
	if (0)
		std::cout << "[Character] copy constructor called name= " << input._name << std::endl;
}

Character const &Character::operator=(Character const &input)
{
	this->_name = input._name + "_assigned";
	for (int i = 0; i < 4; i++)
	{
		if (input._inventory[i] != NULL)
			this->_inventory[i] = input._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
		this->_floor[i] = NULL;
	}
	this->_iFloor = -1;
	if (0)
		std::cout << "[Character] assignement constructor called name= " << input._name << std::endl;
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			if (0)
				std::cout << "[Character] destructor deleted element at inventory[" << i << "]" << std::endl << std::endl;
		}
		if (this->_floor[i] != NULL)
		{
			delete this->_floor[i];
			if (0)
				std::cout << "[Character] destructor deleted element at floor[" << i << "]" << std::endl << std::endl;
		}
	}
	if (0)
		std::cout << "[Character] destructor called name= " << this->_name << std::endl;
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equiped " << m->getType() << " at inventory[" << i << "]" << std::endl;
			m = NULL;
			break ;
		}
	}
	if (m != NULL)
	{
		std::cout	<< this->_name << " tried to equiped " << m->getType() << " at a inventory, but all are full! "
			<< m->getType() << "" << std::endl;
		this->_dropMateria(m);
	}
}

void	Character::unequip(int idx)
{
	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << " unquiped " << this->_inventory[idx]->getType() << " from inventory[" << idx << "]" << std::endl;
		this->_dropMateria(this->_inventory[idx]);
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{

	if (this->_inventory[idx] != NULL)
	{
		std::cout << this->_name << " " << std::endl;
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << this->_name << " tried to use inventory[" << idx << "] but its empty!" << std::endl;
}

void	Character::_dropMateria(AMateria *m)
{
	this->_iFloor++;
	if (this->_iFloor == 4)
	{
		this->_iFloor = 0;
		delete this->_floor[0];
	}
	this->_floor[this->_iFloor] = m;
	std::cout << m->getType() << " dropped on the floor[" << this->_iFloor << "]" << std::endl;
}
