/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:38:43 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/11 10:01:44 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	// std::cout << "Animal : Default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	// std::cout << "Animal : copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	// std::cout << "Animal : Default destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& copy)
{
	// std::cout << "Animal : Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Animal" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}