/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:21:54 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/23 13:21:55 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string	const &getType(void) const;
		void	setType(std::string newType);
};

#endif
