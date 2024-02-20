/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:21:57 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/31 15:25:12 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <fstream>

class Fixed
{
	private:
		static const int l;
		int fixed_point;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int number);
		Fixed(const float number);
		Fixed&	operator=(const Fixed& co);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		bool	operator>(const Fixed& co);
		bool	operator<(const Fixed& co);
		bool	operator>=(const Fixed& co);
		bool	operator<=(const Fixed& co);
		bool	operator==(const Fixed& co);
		bool	operator!=(const Fixed& co);
		Fixed	operator+(const Fixed& co);
		Fixed	operator-(const Fixed& co);
		Fixed	operator*(const Fixed& co);
		Fixed	operator/(const Fixed& co);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static	Fixed& min(Fixed& a, Fixed& b);
		static	Fixed& max(Fixed& a, Fixed& b);
		static const	Fixed& min(const Fixed& a, const Fixed& b);
		static const	Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif