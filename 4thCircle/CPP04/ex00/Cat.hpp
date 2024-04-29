/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:09:56 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 14:03:06 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animals.hpp"

class	Cat : public Animal
{
	private:

		std::string	type;

	public:

		std::string getType( void ) const;
		void makeSound( void ) const;

		Cat();
		Cat(Cat &cpy);
		~Cat();

		Cat &operator=(const Cat &rhs);
};

#endif
