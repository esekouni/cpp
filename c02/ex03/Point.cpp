/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:49:56 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/25 11:04:45 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point:: Point() : x(Fixed()), y(Fixed())
{
	
}

Point:: ~Point()
{
	
}

Point:: Point(const float& _x, const float& _y) : x(Fixed(_x)), y(Fixed(_y))
{

}

Point:: Point(const Point& copy) : x(copy.x) , y(copy.y)
{
	// *this = copy;
}

Point& Point::operator=(const Point& copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

int	Point::get_x() const
{
	// std::cout << "here   " <<this->x.getRawBits() << std::endl;
	return (this->x.getRawBits());
}

int	Point::get_y() const
{
	return (this->y.getRawBits());
}