/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:35:03 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:03:23 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstdlib>
# include <exception>
# include <string>
#include <iostream>
#include <cstdlib>
#include <stdexcept>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <limits>

class ScalarConverter
{
	public:
		ScalarConverter();
		~ScalarConverter();

		virtual void convert(std::string const &str);

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter &operator=(const ScalarConverter &rhs);

		int _getType(const char *strcpy);
		std::string _str;
		char _char;
		int _int;
		float _float;
		double _double;
};

std::ostream &operator<<(std::ostream &out, ScalarConverter const &base);
