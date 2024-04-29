/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:24:09 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/22 15:22:53 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <stdexcept>

class BitcoinExchange
{

	public:
			BitcoinExchange(std::string filename);
			BitcoinExchange(BitcoinExchange const &src);
			~BitcoinExchange();
			BitcoinExchange &	operator=(BitcoinExchange const &rSym);

	private:
			std::map<std::string, float>	_data;
			void fill_data(std::ifstream &file);
			void parse(std::string filename);
			void findDate(std::string date, float value);
			void verifyInput(std::string date, float value);

};
