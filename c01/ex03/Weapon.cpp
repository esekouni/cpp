/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:51:40 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/03 11:44:46 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

const std::string&   Weapon::getType()
{
	return (this->type);
}

void   Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon:: Weapon(std::string type)
{
	this->type = type;
}
