/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:14 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 17:13:42 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	AForm* rrf = NULL;
	try
	{
		Intern someRandomIntern;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		Bureaucrat b("mehdi", 2);
		
		b.signForm(*rrf);
		rrf->execute(b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	} 
	delete rrf;
	return (0);
}
