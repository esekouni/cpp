/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:47:51 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/11 11:05:29 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main()
{
	const Animal* j = new Dog("Dog");
	const Animal* i = new Cat("cat");

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	delete j;
	delete i;
	// system("leaks -q animal");
	return (0);
}
