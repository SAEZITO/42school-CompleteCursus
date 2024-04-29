/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:52:07 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/26 16:53:47 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		int		_energy;

	public:

		ScavTrap (void);
		~ScavTrap(void);
		ScavTrap (std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap &operator=(ScavTrap const & rhs);

		void guardGate();
		void attack(const std::string &target);

};

#endif
