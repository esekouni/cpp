/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:44:40 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/10 18:14:38 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character : Default constructor called" << std::endl;
	int i;

	i = 0;
	this->name = "";
	while (i < 4)
	{
		(this->m[i]) = NULL;
		this->m_delete[i] = NULL;
		i++;
	}
}

Character::Character(std::string name)
{
	int i;

	i = 0;
	this->name = name;
	while (i < 4)
	{
		this->m[i] = NULL;
		this->m_delete[i] = NULL;
		i++;
	}
}

Character::Character(Character& copy)
{
	std::cout << "Character : copy constructor called" << std::endl;
	*this = copy;
}

std::string const & Character::getName() const
{
	return (this->name);
}

Character& Character::operator=(Character& copy)
{
	int i = 0;
	while (i < 4)
	{
		this->m[i] = NULL;
		this->m_delete[i] = NULL;
		i++;
	}
	std::cout << "Character : Copy assignment operator called" << std::endl;
	this->name = copy.getName();
	i = 0;
	while (i < 4)
	{
		if (this->m[i])
			delete this->m[i];
		if (copy.m[i])
		{
			this->m[i] = copy.m[i]->clone();
		}
		i++;
	}
	return (*this);
}

void	Character::equip(AMateria* m)
{
	int i;

	i = 0;
	while (this->m[i])
		i++;
	if (i > 3)
	{
		std::cout << "we can not add\n";
		delete m;
	}
	else
	{
		this->m[i] = m;
	}
	i = 0;
	while (this->m_delete[i] != NULL)
	{
		delete this->m_delete[i];
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !(this->m[idx]))
		return ;
	this->m_delete[idx] = this->m[idx];
	this->m[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->m[idx] != NULL)
	{
		this->m[idx]->use(target);
	}
}

Character::~Character()
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (this->m[i])
			delete this->m[i];
		if (this->m_delete[i])
			delete this->m_delete[i];
		i++;
	}

}