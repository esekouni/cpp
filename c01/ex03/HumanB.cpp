/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:29:12 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/03 11:45:39 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setName(std::string name)
{
	this->name = name;
}

void	HumanB::set_weapon(Weapon &we)
{
	this->we = &we;
}

std::string	HumanB::getName()
{
	return (this->name);
}

HumanB:: HumanB(std::string name)
{
	this->name = name;
	this->we = NULL;
}

void HumanB::attack()
{
	std::cout << this->getName();
	std::cout << " attacks with their ";
	if (we)
		std::cout << this->we->getType() << std::endl;
}
