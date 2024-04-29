/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:05:48 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:55:26 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : virtual public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &input);
		MateriaSource const &operator=(MateriaSource const &input);
		~MateriaSource(void);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

	private:
		AMateria *_inventory[4];
};

#endif
