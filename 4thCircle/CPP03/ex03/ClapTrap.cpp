/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:33:48 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/26 16:41:08 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default")
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "ClapTrap Constructor called" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to attack " << target << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left to be repaired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
}
