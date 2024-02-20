/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:14 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 16:46:31 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("mehdi", 1);
		std::cout << a;
		std::cout << a.get_grade() << std::endl;
		a.decrement();
		std::cout << a.get_grade() << std::endl;
		a.increment();
		std::cout << a.get_grade() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}