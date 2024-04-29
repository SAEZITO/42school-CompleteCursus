/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:05:53 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/19 11:11:27 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	void	annonce(void);
	void	setName(std::string name);
	static	Zombie* zombieHorde(int N, std::string name);
};

#endif
