/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:11:57 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/25 15:03:29 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point cpy_point = point;
	bool b1, b2, b3;

	b1 = cpy_point.sign(a, b) < 0.0f;
	b2 = cpy_point.sign(b, c) < 0.0f;
	b3 = cpy_point.sign(c, a) < 0.0f;

	return ((b1 == b2) && (b2 == b3));
}
