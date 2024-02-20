/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:41:51 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/11 10:08:08 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	// std::cout << "Dog : Default constructor called" << std::endl;
}

Dog::Dog(std::string type)
{
	this->type = type;
}

Dog::Dog(Dog& copy)
{
	// std::cout << "Dog : Default constructor called" << std::endl;
	*this = copy;
}


Dog::~Dog()
{
	// std::cout << "Dog : destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	// std::cout << "cat : Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "how how how" << std::endl;
}
