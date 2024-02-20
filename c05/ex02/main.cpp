/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:14 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 17:16:24 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat b("mehdi", 5);
		ShrubberyCreationForm s("test2");
		PresidentialPardonForm p("test");
		RobotomyRequestForm r("test3");
		
		b.signForm(p);
    	p.execute(b);
		b.signForm(r);
		r.execute(b);
		b.signForm(s);
		s.execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}