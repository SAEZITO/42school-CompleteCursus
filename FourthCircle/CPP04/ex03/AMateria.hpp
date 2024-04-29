/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:59:42 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:52:53 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		AMateria(void);

	protected:
		std::string	_type;

	public:

		AMateria(std::string const &type);
		AMateria(AMateria const &input);
		AMateria const &operator=(AMateria const &input);
		virtual ~AMateria(void);

		std::string const &getType(void) const;

		virtual	AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

};

#endif
