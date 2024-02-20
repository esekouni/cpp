/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:08:44 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/04 15:45:35 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::l = 8;

Fixed:: Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
}

Fixed:: Fixed(const int number)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = number * std::pow(2, l);
}

Fixed:: Fixed(const float number)
{
	std::cout << "Float constructor called" << std::endl;
	(this->fixed_point) = roundf((number * (std::pow(2, l))));
}

Fixed:: Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& co)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &co)
		return (*this);
	this->fixed_point = co.getRawBits();
	return (*this);
}

Fixed:: ~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw )
{
	fixed_point = raw;
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point / std::pow(2, l));
}

float  Fixed::toFloat( void ) const
{
	return ((float)(this->fixed_point) / std::pow(2, l));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
    os << f.toFloat();
    return os;
}
