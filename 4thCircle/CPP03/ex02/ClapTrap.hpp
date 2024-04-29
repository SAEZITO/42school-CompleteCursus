/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:33:41 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/26 14:13:44 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string			_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;

	public:

		ClapTrap (void); // constructeur default
		~ClapTrap(void);
		ClapTrap (std::string name);
		ClapTrap(ClapTrap const &src); // constructeur copy

		ClapTrap &operator=(ClapTrap const &rhs); // constructeur assignation

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
