/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:53:13 by esekouni          #+#    #+#             */
/*   Updated: 2024/01/14 14:31:02 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main()
{
	MutantStack<int> a;
	MutantStack<int> b;
	a.push(5);
	a.push(17);
	a.push(3);
	a.push(737);
	a.push(0);
	MutantStack<int>::iterator it = a.begin();
	MutantStack<int>::iterator ite = a.end();

	std::cout << "stack a : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	b = a;
	
	it = b.begin();
	ite = b.end();
	std::cout << "stack b : " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}