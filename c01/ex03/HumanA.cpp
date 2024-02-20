/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:28:53 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/18 20:00:26 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//initialized list
HumanA::HumanA(std::string name, Weapon &we) : we(we)
{
	this->name = name;
}

std::string HumanA::getName()
{
	return (name);
}

void	HumanA::setName(std:: string name)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << this->getName();
	std::cout << " attacks with their ";
	std::cout << this->we.getType() << std::endl;
}
