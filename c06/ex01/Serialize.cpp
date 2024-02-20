/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:31:45 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/26 16:10:46 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"


Serialize::Serialize()
{
	
}

Serialize::Serialize(Serialize& copy)
{
	*this = copy;
}

Serialize& Serialize::operator=(Serialize& copy)
{
	(void)copy;
	return (*this);
}

uintptr_t Serialize::serialize(Data* ptr)
{
	uintptr_t p;

	p = reinterpret_cast<uintptr_t>(ptr);
	return (p);
}

Data* Serialize::deserialize(uintptr_t raw)
{
	Data *d;

	d = reinterpret_cast<Data*>(raw);
	return (d);
}

Serialize::~Serialize()
{
	
}
