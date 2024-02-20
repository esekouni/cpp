/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:56 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/13 14:44:30 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp(8);
		
		// sp.addNumber(45);
		// sp.addNumber(4);
		// sp.addNumber(88);
		// sp.addNumber(0);
		// sp.addNumber(10);
		// sp.addNumber(32);
		// sp.addNumber(7);
		// sp.addNumber(99);

		std::vector<int> test;
		for (size_t i = 0; i < 8; i++)
			test.push_back(random() % 500);

			
		sp.add_numbers(test.begin() , test.end());
		// sp.print();
		
		std::cout << "The shortest span is : " << sp.shortestSpan() << std::endl;
		std::cout << "The longest span is : " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}