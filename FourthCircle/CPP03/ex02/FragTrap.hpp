/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:23:23 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/26 14:34:57 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string name);

		FragTrap &operator=(FragTrap const &rhs);

		void	attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif
