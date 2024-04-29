/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:45:28 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:52:45 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <exception>
# include <cstdlib>

class	Base
{
	private:

		// Base();
		// Base(Base const &ref);
		// Base &operator=(Base const &ref);

	protected:

	public:

		virtual ~Base();

};

Base	*generate( void );

void	identify(Base* p);

void	identify(Base &p);

class A : public Base {};
class B : public Base {};
class C : public Base {};
