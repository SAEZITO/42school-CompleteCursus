/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:10:09 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 11:38:59 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	protected:
		std::string	type;

	public:

		virtual std::string getType( void ) const;
		virtual void makeSound( void ) const;

		Animal();
		Animal(Animal &cpy);
		virtual ~Animal();

		Animal &operator=(const Animal &rhs);
};

#endif
