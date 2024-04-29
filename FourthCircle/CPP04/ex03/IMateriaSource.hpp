/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:21:49 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:53:26 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:

		virtual	~IMateriaSource(void) {}
		virtual	void learnMateria(AMateria *m) = 0;
		virtual	AMateria *createMateria(std::string const &type) = 0;
};

#endif
