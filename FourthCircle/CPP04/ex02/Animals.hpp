/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:10:09 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 16:09:45 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	AAnimal
{
	protected:
		std::string	type;

	public:

		virtual std::string getType( void ) const = 0;
		virtual void makeSound( void ) const = 0;

		AAnimal();
		AAnimal(AAnimal &cpy);
		virtual ~AAnimal();

		AAnimal &operator=(const AAnimal &rhs);
};

#endif
