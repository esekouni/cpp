/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:21:07 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/09 19:06:41 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria : Default constructor called" << std::endl;
}

AMateria::AMateria(AMateria& copy)
{
	// std::cout << "AMateria : copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria : destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria& copy)
{
	this->type = copy.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}