/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:56 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 15:52:45 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animals.hpp"
# include "Brain.hpp"

class	Cat : public AAnimal
{
	private:

		Brain *brain;
		std::string	type;

	public:

		std::string getType( void ) const;
		void makeSound( void ) const;
		Brain *getBrain( void ) const;

		Cat();
		Cat(Cat &cpy);
		~Cat();

		Cat &operator=(const Cat &rhs);
};

#endif
