/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:16:23 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/17 15:12:22 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int		main()
{
	PhoneBook	repertory;
	std::string	input;

	while (1)
	{
		std::cout << "Use ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			repertory.addContact();
		else if (input == "SEARCH")
			repertory.search();
		else if (input == "EXIT")
		{
			std::cout << "Bye !" << std::endl;
			return (0);
		}
		else
			std::cout << "Invalid command, " << std::flush;
	}
	return (0);
}
