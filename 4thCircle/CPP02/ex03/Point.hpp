/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:11:53 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/25 15:47:56 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>
# include <cmath>

class Point
{

	public:
		Point(void);
		~Point(void);
		Point(Point const &cpy);
		Point(const float x, const float y);

		Point &operator=(Point &cpy);

		void printCoordinates(void) const;
		float sign(Point p2, Point p3);

		Fixed const &getX() const;
		Fixed const &getY() const;

	private:

		Fixed const _x;
		Fixed const _y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
