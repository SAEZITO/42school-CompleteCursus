/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:01:12 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:31:33 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(std::string const &type);
		Ice(Ice const &input);
		Ice const &operator=(Ice const &input);
		~Ice(void);

		std::string const &getType(void) const;

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
