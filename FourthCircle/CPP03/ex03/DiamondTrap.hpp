/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:39:24 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/26 16:51:44 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string name);

		DiamondTrap &operator=(DiamondTrap const &rhs);

		void	attack(const std::string &target);
		void	whoAmI(void);
};


#endif
