/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:41:34 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/19 17:10:30 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		static const int l;
		int fixed_point;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& co);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};



#endif