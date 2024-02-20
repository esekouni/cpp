/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:56:20 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/26 20:02:43 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float surface_abc(Point const a, Point const b, Point const c)
{
	float sur;

	sur = 0.5 * std::abs(a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()));

	return (sur);
}

float surface_p(Point const x, Point const y, Point const p)
{
	float sur;

	sur = 0.5 * std::abs(x.get_x() * (y.get_y() - p.get_y()) + y.get_x() * (p.get_y() - x.get_y()) + p.get_x() * (x.get_y() - y.get_y()));
	return (sur);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	S;
	float	Sabp;
	float	Sacp;
	float	Sbcp;

	S = surface_abc(a, b, c);
	Sabp = surface_p(a, b, point);
	Sacp = surface_p(a, c, point);
	Sbcp = surface_p(b, c, point);
	if (S == Sabp + Sacp + Sbcp && Sabp != 0 && Sacp != 0 && Sbcp != 0)
		return (1);
	return (0);
}