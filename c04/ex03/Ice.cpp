/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:49:11 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/10 17:37:53 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice()
{
	this->type = "";
	// std::cout << "Ice : Default constructor called" << std::endl;
}

Ice::Ice(std::string type)
{
	this->type = type;
}

Ice::Ice(Ice& copy)
{
	// std::cout << "Ice : copy constructor called" << std::endl;
	*this= copy;
}

Ice& Ice::operator=(Ice& copy)
{
	// std::cout << "Ice : Copy assignment operator called" << std::endl;
	this->type = copy.getType();
	return (*this);
}

Ice * Ice::clone() const
{
	Ice *I = new Ice;
	return (I);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice : destructor called" << std::endl;
}

