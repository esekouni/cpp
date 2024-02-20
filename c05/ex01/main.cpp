/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:14 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 16:50:45 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	try
	{
		Bureaucrat a("mehdi", 4);
		Form f("sekouni", 7, 14);

		std::cout << "Bureaucrat : "<< a;
		std::cout << "Form : "<< f;
		std::cout << a.get_grade() << std::endl;
		a.decrement();
		std::cout << a.get_grade() << std::endl;
		a.increment();
		std::cout << a.get_grade() << std::endl;
		// f.beSigned(a);
		a.signForm(f);
		std::cout << "Form : "<< f;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	return 0;
}