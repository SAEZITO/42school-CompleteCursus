/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:46:17 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/20 18:09:04 by alsaez           ###   ########.fr       */
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
	std::cout << "Debug: I love having extra bacon for" << std::flush;
	std::cout << " my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< "I really do!" << std::endl << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "Info: I cannot believe adding extra bacon cost more money."
	<< "You don't put enough! If you did I would not have to ask for it!"
	<< std::endl << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "Warning: I think I deserve to have some extra bacon for free."
	<< "I've been coming here for years and you just started working here last month."
	<< std::endl << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "Error: This is unacceptable, I want to speak to the manager now."
	<< std::endl << std::endl;
	return ;
}

static void toUpper(std::string &str)
{
	for (unsigned int i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

void	Harl::complain(std::string level)
{
	void (Harl::*functPTR)(void) = NULL;
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
		toUpper(levels[i]);
	toUpper(level);
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			functPTR = f[i];
			continue;
		}
	}
	if (!functPTR)
	{
		std::cout << level << ": this level doesn't exist" << std::endl << std::endl;
		return ;
	}
	(this->*functPTR)();
}
