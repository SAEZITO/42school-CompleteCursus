/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.object.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:16:25 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/17 15:17:46 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "The PhoneBook was created" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "The PhoneBook was deleted" << std::endl;
}


void	PhoneBook::printContact(std::string str) const
{
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << str << "|";
}
void	PhoneBook::search()
{
	if (nbContact == 0 && contact[0].getFirstname().empty())
	{
		std::cout << "No contact to display" << std::endl;
		return ;
	}
	std::cout << "  INDEX   |FIRST NAME|   NAME   | NICKNAME |" << std::endl;
	for (int i = 0; i < max_contact; i++)
	{
		if (contact[i].getFirstname().empty())
			continue ;
		std::cout << std::setw(5) << i + 1 << std::setw(6) <<  "|";
		printContact(contact[i].getFirstname());
		printContact(contact[i].getLastname());
		printContact(contact[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << "Enter the index of the contact you want to display: ";
	std::string index;
	std::getline(std::cin, index);
	if (index.empty())
	{
		std::cout << "Index cannot be empty" << std::endl;
		return ;
	}
	if (index.length() > 1 || index[0] < '1' || index[0] > '8')
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	int i = index[0] - '0';
	if (i > nbContact)
	{
		std::cout << "No contact at this index" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "First name: " << contact[i - 1].getFirstname() << std::endl;
	std::cout << "Last name: " << contact[i - 1].getLastname() << std::endl;
	std::cout << "Nickname: " << contact[i - 1].getNickname() << std::endl;
	std::cout << "Phone number: " << contact[i - 1].getPhone() << std::endl;
	std::cout << "DarkestSecret: " << contact[i - 1].getSecret() << std::endl;
	std::cout << std::endl;
}


void PhoneBook::addContact()
{
	std::string input;
	static int i = 0;

	nbContact = 0;
	if (i == max_contact)
		i = 0;
	std::cout << "1.Tape firstname" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "First name cannot be empty" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
		contact[i].setFirstname(input);

	std::cout << "2.Tape lastname" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Last name cannot be empty" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
		contact[i].setLastname(input);

	std::cout << "3.Tape nickname" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Nickname cannot be empty" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
		contact[i].setNickname(input);

	std::cout << "4.Tape phone number" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Phone number cannot be empty" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
		contact[i].setPhone(input);

	std::cout << "5.Tape dark secret" << std::endl;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Dark secret cannot be empty" << std::endl;
		std::cout << std::endl;
		return ;
	}
	else
		contact[i].setSecret(input);
	nbContact++;
	i++;
}
