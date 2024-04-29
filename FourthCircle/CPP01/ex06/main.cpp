/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:45:40 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/23 13:56:23 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **ag)
{
	Harl harl;

	if (ac != 2)
	{
		std::cout << "Pls enter a good number of parameters" << std::endl;
		return 1;
	}
	harl.complain(ag[1]);
	return 0;
}
