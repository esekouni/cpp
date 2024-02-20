/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:08:46 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/23 10:39:02 by esekouni         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& co);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif