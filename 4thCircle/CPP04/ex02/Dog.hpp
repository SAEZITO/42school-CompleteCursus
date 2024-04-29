/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:43 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 15:56:29 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef DOG_HPP
# define DOG_HPP

# include "Animals.hpp"
# include "Brain.hpp"

class	Dog : public AAnimal
{
	private:
		Brain *brain;
		std::string	type;

	public:

		std::string getType( void ) const;
		void makeSound( void ) const;
		Brain *getBrain( void ) const;

		Dog();
		Dog(Dog &cpy);
		~Dog();

		Dog &operator=(const Dog &rhs);
};

#endif
