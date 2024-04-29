/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:17:53 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/22 17:23:11 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
#include <stdexcept>

class RPN
{
	public:

		RPN(char *input);
		RPN(RPN const &src);
		~RPN();

		RPN &	operator=(RPN const &rhs);

	private:

		RPN();
		std::stack<int>	_stack;
};
