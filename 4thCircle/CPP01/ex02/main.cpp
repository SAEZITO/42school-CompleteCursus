/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:39:25 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/19 13:46:44 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address: " << &str << std::endl;
	std::cout << "Memory Pointer: " << stringPTR << std::endl;
	std::cout << "Memory Reference: " << &stringREF << std::endl;

	std::cout << "string: " << str << std::endl;
	std::cout << "Pointer: " << *stringPTR << std::endl;
	std::cout << "Reference: " << stringREF << std::endl;
	return (0);
}
