/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:32:49 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/19 10:59:33 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name)
{
	_name = name;
	annonce();
}

Zombie::~Zombie(void)
{
	std::cout << _name << " destroyed\n";
}

void	Zombie::annonce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}
