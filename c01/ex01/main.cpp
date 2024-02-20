/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:25:08 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/18 19:57:31 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	int 	N;
	
	N = 3;
	zombie = zombieHorde(N, "mahdi");
	int i = 0;
	while(i < N)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
}