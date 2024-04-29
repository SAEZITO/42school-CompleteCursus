/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:44:12 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/15 12:49:43 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			iarr[4] = {0, 1, 2, 3};
	char		carr[5] = "abcd";
	double		darr[4] = {12.1, 13.2, 14.3, 15.4};
	float		farr[4] = {0.1f, 2.3f, 4.5f, 6.7f};
	std::string	sarr[4] = {"un", "deux", "trois", "quatre"};

	std::cout << "int array: ";
	iter(iarr, 4, display);
	std::cout << std::endl << std::endl;

	std::cout << "char array: ";
	iter(carr, 4, display);
	std::cout << std::endl << std::endl;

	std::cout << "double array: ";
	iter(darr, 4, display);
	std::cout << std::endl << std::endl;

	std::cout << "float array: ";
	iter(farr, 4, display);
	std::cout << std::endl << std::endl;

	std::cout << "string array: ";
	iter(sarr, 4, display);
	std::cout << std::endl << std::endl;

	return (0);
}
