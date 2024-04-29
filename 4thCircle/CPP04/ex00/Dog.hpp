/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:43 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 14:03:02 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP

# include "Animals.hpp"

class	Dog : public Animal
{
	private:

		std::string	type;

	public:

		std::string getType( void ) const;
		void makeSound( void ) const;

		Dog();
		Dog(Dog &cpy);
		~Dog();

		Dog &operator=(const Dog &rhs);
};

#endif
