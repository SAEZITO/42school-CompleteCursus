/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:51:08 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/15 15:44:51 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(int, char**)
{
	int		*a = new int();
	std::cout << "a: " << *a << std::endl;
	delete a;
	std::cout << std::endl << "Empty array" << std::endl;
	std::cout << "----------------------------" << std::endl;

	Array<int>	arr;
	try
	{
		std::cout << "Acessing element 0: " << arr[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Assigning element 4: ";
		arr[4] = 4;
		std::cout << "Acessing element 4: " << arr[4] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << arr << std::endl;

    std::cout << std::endl << "Char array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<char> carr(4);
	std::cout << "Before assigning: \n" << carr << std::endl;
	carr[0] = 'a';
	carr[1] = 'b';
	carr[2] = 'c';
	std::cout << "After assigning: \n" << carr << std::endl;
	std::cout << "The size of array is : " << carr.size() << std::endl;

    std::cout << std::endl << "Double array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<double> darr(4);
	std::cout << "Before assigning: \n" << darr << std::endl;
	darr[0] = 42.1;
	darr[1] = -42.2;
	darr[2] = 4242.3;
	darr[3] = -4242.4;
	std::cout << "After assigning: \n" << darr << std::endl;
	std::cout << "The size of array is : " << darr.size() << std::endl;

    std::cout << std::endl << "Float array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<float> farr(4);
	std::cout << "Before assigning: \n" << farr << std::endl;
	farr[0] = 3.14f;
	farr[1] = -48.49f;
	farr[2] = 0.0f;
	farr[3] = 22.22f;
	std::cout << "After assigning: \n" << farr << std::endl;
	std::cout << "The size of array is : " << farr.size() << std::endl;

	std::cout << std::endl << "Int array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<int> iarr(4);
	std::cout << "Before assigning: \n" << iarr << std::endl;
	iarr[0] = 42;
	iarr[1] = 4242;
	iarr[2] = -42;
	iarr[3] = -4242;
	std::cout << "After assigning: \n" << iarr << std::endl;
	std::cout << "The size of array is : " << iarr.size() << std::endl;

	std::cout << std::endl << "String array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Array<std::string> sarr(4);
	std::cout << "Before assigning: \n" << sarr << std::endl;
	sarr[0] = "First string";
	sarr[1] = "Second string";
	sarr[2] = "Third string";
	sarr[3] = "Fourth string";
	std::cout << "After assigning: \n" << sarr << std::endl;
	std::cout << "The size of array is : " << sarr.size() << std::endl;

    return 0;
}
