/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:29:13 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/03 12:20:43 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *B;
	public:
		Cat();
		~Cat();
		Cat(std::string type);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		void makeSound() const;
		void get_idea();
};



#endif