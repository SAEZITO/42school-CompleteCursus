/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:55:48 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 15:51:44 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:

		std::string	*ideas;

	public:

		std::string	*getIdeas();

		Brain();
		~Brain();
		Brain(Brain &ref);
		Brain &operator=(const Brain &rhs);
};

#endif
