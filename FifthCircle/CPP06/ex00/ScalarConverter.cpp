/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:54:55 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/10 16:23:24 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter()
{
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_str = rhs._str;
		this->_char = rhs._char;
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
	}
	return (*this);
}

int ScalarConverter::_getType(const char *strcpy)
{
	int i = 0;
	double tmp = strtod(strcpy, NULL);

	if (_str.size() == 1 && !isdigit(strcpy[0]))
		return (1);
	if (_str.size() == 1 && isdigit(strcpy[0]))
		return (2);
	if (_str.size() > 1 && (strcpy[0] == '-' || strcpy[0] == '+' || isdigit(strcpy[0])) && isdigit(strcpy[1]))
	{
		i = 1;
		while (strcpy[i])
		{
			if (strcpy[i] == '.')
				return 3;
			if (!isdigit(strcpy[i]) && strcpy[i] != 'f')
				return -1;
			i++;
		}
		if (tmp > std::numeric_limits<int>::max() || tmp < std::numeric_limits<int>::min())
			return 4;
		else
			return 2;
	}
	if (_str == "nan" || _str == "nanf" || _str == "-inf" || _str == "+inf"
			|| _str == "-inff" || _str == "+inff" )
			return 5;
	return 0;
}

void ScalarConverter::convert(std::string const &str)
{
	std::string std_char;
	std::string std_int;
	std::string std_float;
	std::string std_double;
	std::stringstream ss;
	this->_str = str;
	const char *strcpy = _str.c_str();
	int		type = _getType(strcpy);

	switch (type)
	{
		case 0:
			throw ScalarConverter::ImpossibleException();
		case 1:
		{
			this->_char = str[0];
			this->_int = static_cast<int>(_char);
			this->_float = static_cast<float>(_char);
			this->_double = static_cast<double>(_char);
			if (!isprint(_char))
				std_char = "No Displayable";
			else
			{
				ss << "'" << _char << "'";
				std_char = ss.str();
				ss.str(std::string());
			}
			ss << _int;
			std_int = ss.str();
			ss.str(std::string());
			ss << _float << ".0f";
			std_float = ss.str();
			ss.str(std::string());
			ss << _double << ".0";
			std_double = ss.str();
			ss.str(std::string());
			break ;
		}
		case 2:
		{
			this->_int = atoi(strcpy);
			ss << _int;
			std_int = ss.str();
			ss.str(std::string());
			if (_int > std::numeric_limits<char>::max() || _int < std::numeric_limits<char>::min())
				std_char = "overflow";
			else if (!isprint(_char = static_cast<char>(_int)))
				std_char = "No Displayable";
			else
			{
				ss << "'" << _char << "'";
				std_char = ss.str();
				ss.str(std::string());
			}
			this->_float = static_cast<float>(_int);
			this->_double = static_cast<double>(_int);
			ss << _float << ".0f";
			std_float = ss.str();
			ss.str(std::string());
			ss << _double << ".0";
			std_double = ss.str();
			ss.str(std::string());
			break ;
		}
		case 3:
		{
			this->_float = atof(strcpy);
			ss << std::fixed << std::setprecision(3) << _float << "f";
			std_float = ss.str();
			ss.str(std::string());
			if (_float > std::numeric_limits<char>::max() || _float < std::numeric_limits<char>::min())
				std_char = "overflow";
			else if (!isprint(_char = static_cast<char>(_float)))
				std_char = "No Displayable";
			else
			{
				ss << "'" << _char << "'";
				std_char = ss.str();
				ss.str(std::string());
			}
			if (_float > std::numeric_limits<int>::max() || _float < std::numeric_limits<int>::min())
				std_int = "overflow";
			else
			{
				this->_int = static_cast<int>(_float);
				ss << _int;
				std_int = ss.str();
				ss.str(std::string());
			}
			this->_double = static_cast<double>(_float);
			ss << std::fixed << std::setprecision(3) << _double;
			std_double = ss.str();
			ss.str(std::string());
			break ;
		}
		case 4:
		{
			this->_double = strtod(strcpy, NULL);
			ss << _double;
			std_double = ss.str();
			ss.str(std::string());
			if (_double > std::numeric_limits<char>::max() || _double < std::numeric_limits<char>::min())
				std_char = "overflow";
			else if (!isprint(_char = static_cast<char>(_double)))
				std_char = "No Displayable";
			else
			{
				ss << "'" << _char << "'";
				std_char = ss.str();
				ss.str(std::string());
			}
			if (_double > std::numeric_limits<int>::max() || _double < std::numeric_limits<int>::min())
				std_int = "overflow";
			else
			{
				this->_int = static_cast<int>(_double);
				ss << _int;
				std_int = ss.str();
				ss.str(std::string());
			}
			if (_double > std::numeric_limits<float>::max() || _double < std::numeric_limits<float>::min())
				std_float = "overflow";
			else
			{
				this->_float = static_cast<float>(_double);
				ss << _float;
				std_float = ss.str();
				ss.str(std::string());
			}
			break ;
		}
		case 5:
		{
			this->_double = strtod(strcpy, NULL);
			this->_float = static_cast<float>(_double);
			std_char = "impossible";
			std_int = "impossible";
			std::stringstream ss;
			ss << _double;
			std_double = ss.str();
			ss.str(std::string());
			ss << _float << "f";
			std_float = ss.str();
			ss.str(std::string());
			break ;
		}
		default :
		{
			throw ScalarConverter::ImpossibleException();
			return ;
		}
	}
	std::cout << "char: " << std_char << std::endl;
	std::cout << "int: " << std_int << std::endl;
	std::cout << "float: " << std_float << std::endl;
	std::cout << "double: " << std_double << std::endl;
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
	return ("Impossible Convertion");
}

const char* ScalarConverter::NonDisplayableException::what() const throw()
{
	return ("Non displayable character");
}
