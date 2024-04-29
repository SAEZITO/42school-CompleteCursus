/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:54:48 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/16 14:56:08 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &span);
		Span &operator=(const Span &span);
		~Span();

		void addNumber(int n);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();

		class FullSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		Span();
		unsigned int _n;
		std::vector<int> _v;
};

#endif
