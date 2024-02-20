/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:02:55 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/08 14:36:54 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		std::string type;
	public:
		Cure();
		Cure(std::string type);
		Cure(Cure& copy);
		Cure& operator=(Cure& copy);
		Cure * clone() const;
		void use(ICharacter& target);
		~Cure();
};



#endif