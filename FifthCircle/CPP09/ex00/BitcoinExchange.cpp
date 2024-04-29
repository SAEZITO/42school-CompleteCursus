/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:24:05 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/22 17:13:41 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filename)
{
	std::cout << "BitcoinExchange constructor called" << std::endl;
	std::ifstream file("data.csv");
	if (!file.is_open())
		throw std::runtime_error("File not found");
	this->fill_data(file);
	file.close();
	this->parse(filename);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	*this = src;
}

BitcoinExchange::~BitcoinExchange(void)
{
	_data.clear();
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if (this != &rhs)
	{
		this->_data = rhs._data;
	}
	return (*this);
}

void	BitcoinExchange::fill_data(std::ifstream &file)
{
	std::string		date;
	std::string		line;
	float			value;

	while (getline(file, line))
	{
		date = strtok((char *)line.c_str(), ",");
		value = std::atof(strtok(NULL, "\n"));
		this->_data.insert(std::pair<std::string, float>(date, value));
	}
}

void	BitcoinExchange::parse(std::string filename)
{
	std::ifstream	file(filename.c_str());
	std::string		date;
	std::string		line;
	float			value;

	if (!file.is_open())
		throw std::runtime_error("File not found");
	getline(file, line);
	while (getline(file, line))
	{
		if (line.find("|") == std::string::npos)
			std::cout << "Error: bad input => " << line << std::endl;
		else if (line.substr(line.find("|")) == "|")
		{
			std::cout << "Error: bad input, no value on line => " << line << std::endl;
		}
		else
		{
			date = strtok((char *)line.c_str(), "|");
			value = std::atof(strtok(NULL, "\n"));
			try
			{
				verifyInput(date, value);
				this->_data.insert(std::pair<std::string, float>(date, value));
				findDate(date, value);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
	}
}
void	BitcoinExchange::findDate(std::string date, float value)
{
	std::map<std::string, float>::iterator it = _data.find(date);
	if (it != _data.end())
	{
		it--;
		std::cout << it->first << " => " << value << " = " << (value * it->second) << std::endl;
		this->_data.erase(date);
	}
}

void	BitcoinExchange::verifyInput(std::string date, float value)
{
	std::string	year;
	std::string	month;
	std::string	day;
	std::string	dates;

	year = strtok((char *)date.c_str(), "-");
	month = strtok(NULL, "-");
	day = strtok(NULL, "\0");
	dates = year + month + day;
	if (dates.length() > 10 || dates.length() < 9)
		throw std::logic_error("Error: bad date input => " + date);
	if ((std::atoi(dates.c_str()) > 20220329) || std::atoi(dates.c_str()) < 20090102)
		throw std::logic_error("Error: value unknow on this date => " + date);
	if (std::atoi(month.c_str()) > 12 || std::atoi(day.c_str()) > 31)
		throw std::logic_error("Error: bad month or day input => " + dates);
	if (value > 1000)
		throw std::logic_error("Error: too large number");
	if (value < 0)
		throw std::logic_error("Error: not positive number");
	std::map<std::string, float>::iterator it = _data.find(date);
	if (it != _data.end())
	{
		float valueF = value * it->second;
		std::ostringstream oss;
		oss << valueF;
		std::string myString = oss.str();
		throw std::logic_error(it->first + " => " + myString);
	}
}
