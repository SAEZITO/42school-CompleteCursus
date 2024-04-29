/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:22:41 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 14:03:38 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:

		std::string	type;

	public:

		std::string getType( void ) const;
		void makeSound( void ) const;

		WrongCat();
		WrongCat(WrongCat &cpy);
		~WrongCat();

		WrongCat &operator=(const WrongCat &rhs);
};

#endif
