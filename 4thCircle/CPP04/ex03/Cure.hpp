/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:01:05 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:19:59 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:

		Cure(void);
		Cure(std::string const &type);
		Cure(Cure const &input);
		Cure const &operator=(Cure const &input);
		~Cure(void);

		std::string const &getType(void) const;

		AMateria *	clone(void) const;
		void		use(ICharacter &target);

};

#endif
