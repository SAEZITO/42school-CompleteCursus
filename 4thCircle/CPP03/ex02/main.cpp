/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:33:45 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/26 14:38:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap clapTrap("Alex");
		ClapTrap clapTrap2(clapTrap);
		ClapTrap clapTrap3 = clapTrap;

		std::cout << std::endl;
		clapTrap.attack("Jordan");
		clapTrap.takeDamage(5);
		clapTrap.beRepaired(5);
		std::cout << std::endl;

		clapTrap2.attack("Jordan");
		clapTrap2.takeDamage(15);
		clapTrap2.beRepaired(15);
		clapTrap2.attack("Jordan");
		std::cout << std::endl;

		clapTrap3.attack("Jordan");
		clapTrap3.takeDamage(9);
		clapTrap3.beRepaired(19);
		clapTrap3.attack("Jordan2");
		clapTrap3.attack("Jordan3");
		clapTrap3.attack("Jordan4");
		clapTrap3.attack("Jordan5");
		clapTrap3.attack("Loic");
		clapTrap3.attack("Loic2");
		clapTrap3.attack("Loic3");
		clapTrap3.attack("Loic4");
		clapTrap3.attack("Loic5");
		std::cout << std::endl;
	}
	{
		ScavTrap test("Alex");

		test.attack("Benjamin");
		test.beRepaired(10);
		test.takeDamage(10);
		test.guardGate();
		test.takeDamage(100);
		test.beRepaired(100);
		test.attack("Benjamin");
		std::cout << std::endl;
	}

	{
		std::cout << std::endl;
		FragTrap test("Alex");

		test.attack("Benjamin");
		test.beRepaired(10);
		test.takeDamage(10);
		test.highFivesGuys();
		test.takeDamage(100);
		test.beRepaired(100);
		test.attack("Benjamin");
		std::cout << std::endl;
	}
	return (0);
}
