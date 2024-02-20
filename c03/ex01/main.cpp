/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:15:32 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/01 16:37:11 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap s1;
	ScavTrap s2("mehdi");
	
	s1 = s2;
	s1.attack ("sekouni");
	s1.beRepaired (4);
	s1.takeDamage (2);
	s1.guardGate();
	

	return (0);
}