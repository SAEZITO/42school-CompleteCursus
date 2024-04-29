/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:12:03 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/25 15:56:40 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

static void testing_point_class( Point const a, Point const b, Point const c )
{
	a.printCoordinates();
	b.printCoordinates();
	c.printCoordinates();
	std::cout << std::endl;
}

static void testing_bsp(void)
{
	Point const a(0.0f, 0.0f);
	Point const b(2.0f, 2.0f);
	Point const c(2.5f, 1.0f);
	Point const p1(1.5f, 1.0f);
	Point const p2(1.5f, 0.5f);
	Point const p3(1.0f, 1.0f);
	Point const p4(-0.1f, -0.1f);
	Point const p5(1.0f, 0.5f);
	Point const p6(1.25f, 0.75f);

	testing_point_class(a, b, c);
	testing_point_class(p1, p2, p3);
	testing_point_class(p4, p5, p6);

	std::cout << "Test Point 1: " << (bsp(a, b, c, p1) ? "true" : "false") << std::endl;
	std::cout << "Test Point 2: " << (bsp(a, b, c, p2) ? "true" : "false") << std::endl;
	std::cout << "Test Point 3: " << (bsp(a, b, c, p3) ? "true" : "false") << std::endl;
	std::cout << "Test Point 4: " << (bsp(a, b, c, p4) ? "true" : "false") << std::endl;
	std::cout << "Test Point 5: " << (bsp(a, b, c, p5) ? "true" : "false") << std::endl;
	std::cout << "Test Point 6: " << (bsp(a, b, c, p6) ? "true" : "false") << std::endl;
}

int	main(void)
{
	testing_bsp();

	return 0;
}
