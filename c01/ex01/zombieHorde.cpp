/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:25:58 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/07 15:08:58 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		exit(1);
	Zombie *zombie =  new Zombie[N];
	int i;

	i = 0;
	while (i < N)
	{
		zombie[i].set_name(name);
		i++;
	}
	return (zombie);
}