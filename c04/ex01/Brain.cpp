/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:37:25 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/11 10:40:25 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	// std::cout << "Brain : Default constructor called" << std::endl;
}

Brain::Brain(Brain& copy)
{
	// std::cout << "Brain : copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(Brain& copy)
{
	// std::cout << "Brain : Copy assignment operator called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	return (*this);
}


Brain::~Brain()
{
	// std::cout << "Brain : destructor called" << std::endl;
}