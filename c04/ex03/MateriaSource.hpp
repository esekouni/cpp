/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:33:20 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/09 16:02:31 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*m[4];
	public:
		MateriaSource ();
		MateriaSource (MateriaSource& copy);
		MateriaSource& operator=(MateriaSource& copy);
		~MateriaSource ();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};





#endif