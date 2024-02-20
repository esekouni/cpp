/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:46:44 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/01 17:10:53 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAB_HPP
#define FRAGTAB_HPP

#include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap& operator=(const FragTrap& copy);
		FragTrap(FragTrap& copy);
		~FragTrap();
		void highFivesGuys();
};


#endif