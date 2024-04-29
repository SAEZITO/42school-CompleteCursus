/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:11:33 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/25 15:44:56 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0){}

Point::~Point(void) {}

Point::Point(const Point& cpy) : _x(cpy.getX()), _y(cpy.getY()) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point &Point::operator=(Point &cpy)
{
	return (cpy);
}

Fixed const &Point::getX() const
{
	return (this->_x);
}
Fixed const &Point::getY() const
{
	return (this->_y);
}

void Point::printCoordinates(void) const
{
	std::cout << "(x: " << getX() << ", y: " << getY() << ")" << std::endl;
}

float Point::sign(Point p2, Point p3)
{
	Fixed res;

	res = (p2.getX() - getX()) * (p3.getY() - getY()) - (p2.getY() - getY()) * (p3.getX() - getX());

	return res.toFloat();
}
