/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:16:40 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/22 17:19:42 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "number of argument is wrong" << std::endl;
		return (-1);
	}
	try
	{
		RPN	parse(av[1]);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
