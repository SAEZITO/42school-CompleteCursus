/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:22:50 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 14:04:21 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	private:

		std::string	type;

	public:

		virtual std::string getType( void ) const;
		virtual void makeSound( void ) const;

		WrongAnimal();
		WrongAnimal(WrongAnimal &cpy);
		virtual ~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &rhs);
};

#endif
