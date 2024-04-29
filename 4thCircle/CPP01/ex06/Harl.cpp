/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:46:17 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/23 14:10:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl is born" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Harl is dead" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ Debug ]" << std::endl << "I love having extra bacon for" << std::flush;
	std::cout << " my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< "I really do!" << std::endl << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[ Info ]" << std::endl
	<< "I cannot believe adding extra bacon cost more money."
	<< "You don't put enough! If you did I would not have to ask for it!"
	<< std::endl << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ Warning ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."
	<< "I've been coming here for years and you just started working here last month."
	<< std::endl << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ Error ]" << std::endl
	<< "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
	return ;
}

static void toUpper(std::string &str)
{
	for (unsigned int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

void	Harl::complain(std::string level)
{
	std::string _level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	toUpper(level);
	for (i = 0; i < 4; i++)
		if (level == _level[i])
			break ;
	switch (i)
	{
		case 0:
				Harl::debug();
		case 1:
				Harl::info();
		case 2:
				Harl::warning();
		case 3:
				Harl::error();
				break ;
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				return ;
	}
}
