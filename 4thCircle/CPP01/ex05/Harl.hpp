/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:46:06 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/20 17:54:53 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};
