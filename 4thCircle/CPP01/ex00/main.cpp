/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:33:00 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/19 15:18:39 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
	Zombie	*z1;

	Zombie::randomChump("stackZombie");
	z1 = Zombie::newZombie("heapZombie");

	std::cout << "DELETING HEAP :\n";
	delete z1;
	std::cout << "HEAP DELETED.\n";

	return (0);
}
