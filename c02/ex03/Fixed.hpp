/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:49:21 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/25 10:34:34 by esekouni         ###   ########.fr       */
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
		int get(void) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif