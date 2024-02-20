/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:31:27 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/27 12:13:36 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"
#include "C.hpp"
#include <iostream>


Base * generate()
{
	int i;
	Base *b;

	srand(time(NULL));
	i = std::rand() % 3;
	std::cout << i <<std::endl;
	if (i == 0)
		b = new A;
	else if (i == 1)
		b = new B;
	else
		b = new C;

	return (b);
}

void identify(Base* x)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(x);
	if (a != NULL)
	{
		std::cout << "type is A" << std::endl;
	}
	b = dynamic_cast<B*>(x);
	if (b != NULL)
	{
		std::cout << "type is B" << std::endl;
	}
	c = dynamic_cast<C*>(x);
	if (c != NULL)
	{
		std::cout << "type is C" << std::endl;
	}
}

void identify(Base& x)
{
	int i = 0;

	try
	{
		A& a = dynamic_cast<A&>(x);
		(void)a;
		std::cout << "type is A" << std::endl;
		i = 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		B& b = dynamic_cast<B&>(x);
		(void)b;
		std::cout << "type is B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		C& c = dynamic_cast<C&>(x);
		(void)c;
		std::cout << "type is C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	

}

int main()
{
	Base *b1 = generate();
	Base &b2 = *generate();


	
	identify(b1);
	identify(b2);
	
	
	

	delete b1;
	delete &b2;
	return (0);
}
