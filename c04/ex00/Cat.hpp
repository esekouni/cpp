/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:29:13 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/03 10:31:53 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
		
	public:
		Cat();
		~Cat();
		Cat(std::string type);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& copy);
		void makeSound() const;
};



#endif