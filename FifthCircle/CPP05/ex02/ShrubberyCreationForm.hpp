/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:08:43 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:06:57 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class   ShrubberyCreationForm : public AForm
{
	private:

		std::string	_target;

	public:

		std::string	getTarget( void ) const;

		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &ref);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &ref);

		ShrubberyCreationForm(std::string target);
		void	execute(Bureaucrat const &executor) const;
};

#endif
