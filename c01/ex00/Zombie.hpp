/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:30:40 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/07 15:04:55 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ZOMBIE_HPP
#define  ZOMBIE_HPP

#include <iostream>

class  Zombie
{
	private:
		std::string name;
	
	public:
		Zombie(std::string NAME);
		~Zombie();
		void announce( void );
};

Zombie*	newZombie( std::string name);
void randomChump(std::string name);

#endif