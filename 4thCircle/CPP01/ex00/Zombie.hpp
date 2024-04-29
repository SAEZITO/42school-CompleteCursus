/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:32:52 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/19 10:43:14 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	annonce(void);
		static	Zombie* newZombie(std::string name);
		static	void randomChump(std::string name);

	private:
		std::string _name;

};

#endif
