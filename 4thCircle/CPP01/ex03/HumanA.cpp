/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:21:15 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/23 13:21:16 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name), _weapon(weapon){}

HumanA::~HumanA(void){}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their "
	<< this->_weapon.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
