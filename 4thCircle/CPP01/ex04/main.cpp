/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:31:46 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/20 16:55:13 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

std::string	newReplace(size_t pos, size_t len, std::string s2, std::string content)
{
	std::string newContent;
	newContent = content.substr(0, pos);
	newContent += s2;
	newContent += content.substr(pos + len);
	return (newContent);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		return (1);
	}
	std::string line;
	std::string content;
	while (std::getline(ifs, line))
	{
		content += line;
		content += "\n";
	}
	ifs.close();
	filename.append(".replace");
	std::ofstream ofs(filename.c_str());
	if (!ofs.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		return (1);
	}
	size_t pos = 0;
	while ((pos = content.find(s1)) != std::string::npos)
	{
		content = newReplace(pos, s1.length(), s2, content);
	}
	ofs << content;
	ofs.close();
	return (0);
}
