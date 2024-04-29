/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:04:29 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:53:14 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:

		Character(void);
		void		_dropMateria(AMateria *materia);
		std::string	_name;
		AMateria	*_floor[4];
		AMateria	*_inventory[4];
		int			_iFloor;

	public:
		Character(Character const &input);
		Character const &operator=(Character const &input);
		~Character(void);

		Character(std::string const &name);
		std::string const &getName(void) const;
		void equip(AMateria *materia);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
