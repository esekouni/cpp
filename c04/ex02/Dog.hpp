/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:41:55 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/03 12:17:59 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *B;
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog& copy);
		~Dog();
		Dog& operator=(const Dog& copy);
		void makeSound() const;
};



#endif