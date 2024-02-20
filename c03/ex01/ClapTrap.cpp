/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:15:45 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/31 20:10:12 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap : Default constructor called" << std::endl;
	this->name = "";
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
} 

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ClapTrap:: ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap : Copy assignment operator called" << std::endl;
	this->name = copy.name;
	this->damage = copy.damage;
	this->energy = copy.energy;
	this->health = copy.health;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy <= 0 || this->health <= 0)
	{
		std::cout << "can not attaking" << std:: endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage <<" points of damage!" << std::endl;
	this->energy--;
	this->damage--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energy <= 0)
	{
		std::cout << "can not take da" << std:: endl;
		return ;
	}
	std::cout << "ClapTrap take damage" << std:: endl;
	this->damage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy <= 0)
	{
		std::cout << "can not be Repaired" << std:: endl;
		return ;
	}
	std::cout << "ClapTrap repaired" << std:: endl;
	this->energy--;
	this->health += amount;	
	
}