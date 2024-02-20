/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:19:12 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/01 14:28:23 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
#define EASYFIND

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
int  easyfind(T &container, int x)
{
	if (std::find(container.begin(),container.end() , x) == container.end())
		return (0);
	else
		return (1);
}



#endif