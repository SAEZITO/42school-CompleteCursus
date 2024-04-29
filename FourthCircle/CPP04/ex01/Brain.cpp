/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:55:52 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 15:09:07 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called, " << std::flush;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Ideas";
	std::cout << "Full Brain Ideas Created" << std::endl;
}

Brain::~Brain()
{
	delete [] this->ideas;
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain::Brain(Brain &cpy)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = cpy;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain Assignation Operator Called" << std::endl;
	this->ideas = rhs.ideas;
	return (*this);
}

