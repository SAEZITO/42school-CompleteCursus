/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:36:34 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/12 11:05:37 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	int		i;
	int		j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i=1 ; i < ac; i++)
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
		}
		std::cout << std::endl;
	}
	return (0);
}
