/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:29:40 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/09 12:42:03 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap : Default constructor called" << std::endl;
	hit = FragTrap::health;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
}

DiamondTrap::DiamondTrap(std::string name) 
{
	this->name =  name;
	ClapTrap::name = name + "_clap_name";
	//  : ClapTrap(name + "_clap_name")
	hit = FragTrap::health;
	energy = ScavTrap::energy;
	damage = FragTrap::damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap : Destructor called" << std::endl;	
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
	std::cout << "ScavTrap : Copy assignment operator called" << std::endl;
	this->name = copy.name;
	this->hit = copy.hit;
	this->energy = copy.energy;
	this->damage = copy.damage;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack (target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap : " << this->name << std::endl;
	std::cout << "ClapTrap : " << ClapTrap::name << std::endl;
}