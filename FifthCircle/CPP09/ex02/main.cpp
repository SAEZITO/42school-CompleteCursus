/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:01:14 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/23 09:04:08 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	int i;
	int nb;
	std::vector<int> vec;
	std::list<int> list;
	PmergeMe	PmergeMe;

	if (ac < 3)
		std::cout << "Number of argument isn't enought" << std::endl;
	for (i = 1; av[i] != NULL; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
			if (!isdigit(av[i][j]))
				return std::cout << "Error: Please enter only positive numbers." << std::endl, 1;
		nb = atoi(av[i]);
		if (nb < 0)
			return std::cout << "Error: Please use a positive integer sequence as argument." << std::endl, 1;
		vec.push_back(nb);
		list.push_back(nb);
	}
	PmergeMe.mergeSort(vec, list);
	return 0;
}
