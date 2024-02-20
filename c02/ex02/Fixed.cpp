/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:21:53 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/26 18:33:56 by esekouni         ###   ########.fr       */
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

Fixed& Fixed::operator++()
{
	++fixed_point;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	fixed_point++;
	return (copy);
}

Fixed& Fixed::operator--()
{
	--fixed_point;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	fixed_point--;
	return (copy);
}

bool Fixed::operator>(const Fixed& co)
{
	if (this->fixed_point > co.fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator<(const Fixed& co)
{
	if (this->fixed_point < co.fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed& co)
{
	if (this->fixed_point >= co.fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed& co)
{
	if (this->fixed_point <= co.fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed& co)
{
	if (this->fixed_point == co.fixed_point)
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed& co)
{
	if (this->fixed_point != co.fixed_point)
		return (1);
	else
		return (0);
}

Fixed Fixed::operator+(const Fixed& co)
{
	return (Fixed((float)(((this->fixed_point + co.fixed_point) / std::pow(2, l)))));
}

Fixed Fixed::operator/(const Fixed& co)
{
	return (Fixed((float)((this->fixed_point / co.fixed_point) / std::pow(2, l * 2))));
}

Fixed Fixed::operator-(const Fixed& co)
{
	return (Fixed((float)(((this->fixed_point - co.fixed_point) / std::pow(2, l)))));
}

Fixed Fixed::operator*(const Fixed& co)
{
	return (Fixed((float)((this->fixed_point * co.fixed_point) / std::pow(2, l * 2))));
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

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.fixed_point > b.fixed_point)
		return (a);
	else
		return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.fixed_point < b.fixed_point)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point > b.fixed_point)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.fixed_point < b.fixed_point)
		return (a);
	else
		return (b);
}