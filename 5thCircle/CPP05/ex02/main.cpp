/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:13:33 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/07 13:27:37 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	// constructor of bureaucrats

	Bureaucrat	bob("Bob", 150);
	Bureaucrat	antoine("Antoine", 100);
	Bureaucrat	gerald("Geraldine", 50);
	Bureaucrat	sylvie("Sylvianne", 1);
	Bureaucrat & bob_ref = bob;
	Bureaucrat & antoine_ref = antoine;
	Bureaucrat & gerald_ref = gerald;
	Bureaucrat & sylvie_ref = sylvie;

	std::cout << std::endl;

	// Construction of a Shrubbery Form

	ShrubberyCreationForm	a("A27");

	// And now we signed it

	bob_ref.signForm(a);
	a.getSigned();

	antoine_ref.signForm(a);
	a.getSigned();

	// Execute it test

	bob_ref.executeForm(a);
	antoine_ref.executeForm(a);

	std::cout << std::endl;

	// Construction of Robot Request Form

	RobotmyRequestForm	b("A28");

	// // And now we signed it

	bob_ref.signForm(b);
	b.getSigned();

	antoine_ref.signForm(b);
	b.getSigned();

	gerald_ref.signForm(b);
	b.getSigned();

	// Execute it test

	bob_ref.executeForm(b);
	antoine_ref.executeForm(b);
	gerald_ref.executeForm(b);
	sylvie_ref.executeForm(b);

	std::cout << std::endl;

	// Construction of Presidential Pardon Form

	PresidentialPardonForm	c("A29");

	// And now we signed it

	bob_ref.signForm(c);
	c.getSigned();

	antoine_ref.signForm(c);
	c.getSigned();

	gerald_ref.signForm(c);
	c.getSigned();

	sylvie_ref.signForm(c);
	c.getSigned();

 	// Execute it test

	bob_ref.executeForm(c);
	antoine_ref.executeForm(c);
	gerald_ref.executeForm(c);
	sylvie_ref.executeForm(c);

	std::cout << std::endl;

// Destructors

	std::cout << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << "/////////////////////// YOU'RE ALL FIRED NOW ///////////////////////" << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << "////////////////////////////////// ELON M. /////////////////////////" << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << std::endl;

	return 0;
}
