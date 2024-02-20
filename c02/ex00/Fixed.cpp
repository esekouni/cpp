/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:41:31 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/19 14:43:38 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
const int Fixed::l = 8;

Fixed:: Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_point = 0;
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}

void Fixed::setRawBits(int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	std::cout << raw << std::endl;
}