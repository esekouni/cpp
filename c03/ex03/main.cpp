/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:15:32 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/09 12:41:43 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
	DiamondTrap s1("mehdi");
	
	s1.attack ("sekouni");
	s1.beRepaired (4);
	s1.takeDamage (2);
	s1.guardGate();
	s1.whoAmI();
	

	return (0);
}