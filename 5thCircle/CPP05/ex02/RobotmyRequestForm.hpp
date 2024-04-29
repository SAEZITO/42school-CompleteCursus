/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:09:35 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:22:44 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP


# include "AForm.hpp"
# include <iostream>
# include <cstdlib>

class AForm;

class	RobotmyRequestForm : public AForm
{
	private:

		std::string	_target;

	protected:

	public:

		RobotmyRequestForm();
		~RobotmyRequestForm();
		RobotmyRequestForm(RobotmyRequestForm const & ref);
		RobotmyRequestForm & operator=(const RobotmyRequestForm & ref);

		std::string	getTarget( void ) const;

		RobotmyRequestForm(std::string target);
		void	execute(Bureaucrat const & executor) const;
		class FailureException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
