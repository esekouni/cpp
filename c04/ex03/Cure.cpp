/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:02:48 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/09 19:38:57 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "";
	// std::cout << "Cure : Default constructor called" << std::endl;
}

Cure::Cure(std::string type)
{
	this->type = type;
}

Cure::Cure(Cure& copy)
{
	// std::cout << "Cure : copy constructor called" << std::endl;
	*this = copy;
}

Cure& Cure::operator=(Cure& copy)
{
	// std::cout << "Cure : Copy assignment operator called" << std::endl;
	this->type = copy.getType();
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure : destructor called" << std::endl;
}

Cure * Cure::clone() const
{
	Cure *c = new Cure;
	return (c);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
