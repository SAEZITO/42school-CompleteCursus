/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:03:36 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/23 13:43:13 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 15;
	int	i = 0;

	Zombie	*horde = Zombie::zombieHorde(N, "Johnny");
	while (i < N)
	{
		horde[i].annonce();
		i++;
	}
	delete [] horde;
	return (0);
}
