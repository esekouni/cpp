/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:49:13 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/08 14:38:56 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string type;
	public:
		Ice();
		Ice(std::string type);
		Ice(Ice& copy);
		Ice& operator=(Ice& copy);
		Ice * clone() const;
		void use(ICharacter& target);
		~Ice();
};



#endif