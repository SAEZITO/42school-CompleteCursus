/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:16:22 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/16 14:44:36 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iomanip>

int		main(void)
{
	std::vector<int>	vec;
	std::list<int>		lst;

	srand(time(NULL));
	int choose = std::rand() % 120;
	int choose2 = std::rand() % 120;
	int pos = 0;

	std::cout << "Vector:" << std::endl;
	for (int i = 0; i < 100; i++)
		vec.push_back(i);
	for (int i = 0; i < 100; i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl << "Value to find : " << choose << std::endl;
	try
	{
		pos = easyfind(vec, choose);
		std::cout << "Value found at position : " << pos << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Value not found" << std::endl;
	}

	std::cout << "List:" << std::endl;
	for (int i = 0; i < 100; i++)
		lst.push_back(i);
	for (std::list<int>::iterator it=lst.begin(); it != lst.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl << "Value to find : " << choose2 << std::endl;
	try
	{
		pos = easyfind(vec, choose2);
		std::cout << "Value found at position : " << pos << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Value not found" << std::endl;
	}

}
