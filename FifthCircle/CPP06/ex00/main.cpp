/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:23:11 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/09 12:19:01 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc == 2 && argv[1] != NULL)
	{
		ScalarConverter sc;

		try
		{
			sc.convert(argv[1]);
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
	{
		std::cerr << "Wrong number of orguments" << std::endl;
		return (1);
	}
	return (0);
}
