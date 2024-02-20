/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:55:38 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/28 13:18:52 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T& x, T& y)
{
	T t;
 
	t = x;
	x = y;
	y = t;
}

template <typename T>
T min(T x, T y)
{
	if (x > y)
		return (y);
	else
		return (x);
}

template <typename T>
T max(T x, T y)
{
	if (x < y)
		return (y);
	else
		return (x);
}





#endif