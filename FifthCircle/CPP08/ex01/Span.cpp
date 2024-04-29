/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:54:44 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/16 17:05:58 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n) : _n(n)
{
	_v.reserve(n);
}

Span::Span(const Span &span)
{
	*this = span;
}

Span &Span::operator=(const Span &span)
{
	if (this != &span)
	{
		this->_n = span._n;
		this->_v = span._v;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (this->_v.size() < this->_n)
		this->_v.push_back(n);
	else
		throw FullSpanException();
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_v.size() + std::distance(begin, end) <= this->_n)
		this->_v.insert(this->_v.end(), begin, end);
	else
		throw FullSpanException();
}

int Span::shortestSpan()
{
	if (this->_v.size() < 2)
		throw NotEnoughNumbersException();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	int min = tmp[1] - tmp[0];
	for (unsigned int i = 1; i < tmp.size() - 1; i++)
	{
		if (tmp[i + 1] - tmp[i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return min;
}

int Span::longestSpan()
{
	if (this->_v.size() < 2)
		throw NotEnoughNumbersException();
	std::vector<int> tmp = this->_v;
	std::sort(tmp.begin(), tmp.end());
	return tmp[tmp.size() - 1] - tmp[0];
}

const char *Span::FullSpanException::what() const throw()
{
	return "Span is full";
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return "Not enough numbers in Span";
}

