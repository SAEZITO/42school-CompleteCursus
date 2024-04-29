/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:21:27 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/23 13:21:28 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(void);
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif
