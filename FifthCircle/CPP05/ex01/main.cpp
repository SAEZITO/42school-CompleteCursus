/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:13:33 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/02 15:51:49 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Form form("1", 0, 1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Form form("2", 1, 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Form form("3", 151, 1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Form form("4", 1, 151);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Bureaucrat bureaucrat("Boss", 1);
		Form form("5", 2, 2);

		std::cout << form;
		bureaucrat.signForm(form);
		std::cout << bureaucrat;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	return 0;
	}
