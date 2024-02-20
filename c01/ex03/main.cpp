/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:28:23 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/03 11:45:26 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	
	Weapon Club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.set_weapon(Club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return (0);
}