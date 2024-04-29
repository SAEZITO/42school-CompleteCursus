/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:17:01 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/23 08:54:00 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN ()
{
}

RPN::RPN(char *input)
{
	int		fst;
	int		scd;
	int		res;

	int		digit = 0;
	int		sign = 0;

	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == ' ')
			i++;
		if (input[i] == '\0')
			break ;
		if (isdigit(input[i]))
			digit++;
		else if ((input[i]) == '*' || (input[i]) == '/' || (input[i]) == '+' || (input[i]) == '-')
			sign++;
		else
			throw std::runtime_error("Error syntax: You must have digit and operators and only one space between them.");
	}

	if (sign != digit - 1)
		throw std::runtime_error("Error syntax: You must have one digit more than signs.");

	for (int i = 0; input[i] != '\0'; i++)
	{
		if (input[i] == ' ')
			i++;
		if (input[i] == '\0')
			break ;
		if (isdigit(input[i]))
		{
			this->_stack.push(input[i] - '0');
		}
		else if ((input[i]) == '*' || (input[i]) == '/' || (input[i]) == '+' || (input[i]) == '-')
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: You need two nuber before first operator!");
			scd = this->_stack.top();
			this->_stack.pop();
			fst = this->_stack.top();
			this->_stack.pop();
			switch (input[i]) {
			case '*':
				res = fst * scd;
				break;
			case '/':
				res = fst / scd;
				break;
			case '+':
				res = fst + scd;
				break;
			case '-':
				res = fst - scd;
			default:
				break;
			}
			this->_stack.push(res);
		}
		else
		{
			std::cout << "Error: bad operator !" << std::endl;
			return;
		}
	}
	std::cout << res << std::endl;
}

RPN::RPN(RPN const &src)
{
	this->_stack = src._stack;
	*this = src;
}

RPN::~RPN()
{
}

RPN &	RPN::operator=(RPN const &rhs)
{
	if (this != &rhs)
	{
		this->_stack = rhs._stack;
	}
	return *this;
}
