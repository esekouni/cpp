/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:33:18 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/10 11:55:33 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource ::MateriaSource ()
{
	int i;

	i = 0;
	while (i < 4)
	{
		(this->m[i]) = NULL;
		i++;
	}
}

MateriaSource ::MateriaSource (MateriaSource& copy)
{
	*this = copy;
}

MateriaSource ::~MateriaSource ()
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->m[i])
			delete this->m[i];
		i++;
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource& copy)
{
	int i = 0;
	while (i < 4)
	{
		if (this->m[i])
			delete this->m[i];
		this->m[i] = copy.m[i]->clone();
		i++;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *ma)
{
	int i = 0;

	while(this->m[i])
		i++;
	if (i > 3)
	{
		std::cout << "we can not learn materia\n";
		delete ma; 
	}
	else
	{
		this->m[i] = ma;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	return (NULL);
}