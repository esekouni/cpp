/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:30:02 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/11 10:05:47 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	// std::cout << "Cat : Default constructor called" << std::endl;
}

Cat::Cat(std::string type)
{
	this->type = type;
}

Cat::Cat(const Cat& copy)
{
	// std::cout << "Cat : Default constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	// std::cout << "Cat : destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	// std::cout << "cat : Copy assignment operator called" << std::endl;
	this->type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meows meows meows" << std::endl;
}


