/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:39:00 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/26 16:59:15 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("_clap_name")
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hit;
	this->_energyPoints = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attack;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hit;
	this->_energyPoints = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = src;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << " and his ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
