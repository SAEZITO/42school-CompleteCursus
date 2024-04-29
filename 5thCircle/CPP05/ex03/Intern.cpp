/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:34:53 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:58:31 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "A default Intern has been created" << std::endl << std::endl;
}

Intern::~Intern()
{
	std::cout << "A Intern has been fired, but who care ?" << std::endl;
}

Intern::Intern(Intern const & ref)
{
	(void)ref;
	std::cout << "A Intern has been constructed by copyref" << std::endl;
}

Intern & Intern::operator=(Intern const & ref)
{
	(void)ref;
	std::cout << "A Intern has been constructed by clonage assignation" << std::endl;
	return (*this);
}

static AForm	*new_robo(std::string target)
{
	AForm	*robo = new RobotmyRequestForm(target);
	return (robo);
}

static  AForm	*new_president(std::string target)
{
	AForm	*president = new PresidentialPardonForm(target);
	return (president);
}

static  AForm	*new_shrub(std::string target)
{
	AForm	*shrub = new ShrubberyCreationForm(target);
	return (shrub);
}

AForm *Intern::makeForm(std::string form_name, std::string form_target)
{
	int i;

	i = -1;
	AForm	*(*fct[3])(std::string target) = { new_robo, new_president, new_shrub};
	std::string	msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm	*ret = NULL;
	while (++i < 3)
	{
		if (form_name == msg[i])
			ret = fct[i](form_target);
	}
	if (ret)
		std::cout << "Intern creates " << *ret << std::endl;
	else
		throw (Intern::Exception());
	return (ret);
}

const char*	Intern::Exception::what() const throw()
{
	return ("An Intern have found an error, take the prestige if you can and fired him, or her");
}
