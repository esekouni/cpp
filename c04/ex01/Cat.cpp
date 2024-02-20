/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:30:02 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/11 10:40:47 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	// std::cout << "Cat : Default constructor called" << std::endl;
	this->B = new Brain;
	int i = 0;
	while (i < 100)
	{
		this->B->ideas[i] = "cat";
		i++;
	}
}

Cat::Cat(std::string type)
{
	this->type = type;
	this->B = new Brain;
}

Cat::Cat(const Cat& copy)
{
	// std::cout << "Cat : Copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	delete this->B;
	// std::cout << "Cat : Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	// std::cout << "cat : Copy assignment operator called" << std::endl;
	this->type = copy.type;
	delete this->B;
	this->B = new Brain;
	B = copy.B;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "meows meows meows" << std::endl;
}

void Cat::get_idea()
{
	int i = 0;
	while (i < 100)
	{
		std::cout << this->B->ideas[i] << std::endl;
		i++;
	}
	
}


