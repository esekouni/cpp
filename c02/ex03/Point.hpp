/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:52:28 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/25 11:26:48 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const float& x, const float& y);
		~Point();
		Point(const Point& copy);
		int	get_x() const;
		int	get_y() const;
		Point& operator=(const Point& copy);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif