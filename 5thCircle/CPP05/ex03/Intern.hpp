/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:35:03 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:49:54 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotmyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	AForm;

class	Intern
{
	private:

	protected:

	public:
		Intern();
		~Intern();
		Intern(Intern const & ref);
		Intern & operator=(Intern const & ref);

		AForm	*makeForm(std::string nameOfAForm, std::string target);

		class Exception : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

};

#endif
