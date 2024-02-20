/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:18:52 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 10:59:15 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern& copy)
{
	*this = copy;
}

AForm * new_ShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm * new_PresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm * new_RobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

const char * Intern::Intern_exeption::what() const throw()
{
	return ("can't Intern");
}

AForm * Intern::makeForm(std::string name, std::string target)
{
	AForm *f = NULL;
	std::string str[3]={"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *	(*ptr[3])(std::string) = {&new_PresidentialPardonForm, &new_RobotomyRequestForm, &new_ShrubberyCreationForm};
	int index = -1;
	int i;
	
	for( i = 0; i < 3; i++)
	{
		if (name == str[i])
			index = i;
	}
	if (index != -1)
		f =  ptr[index](target);
	else
		throw Intern_exeption();

	std::cout << "Intern creates " << name << std::endl;
	return (f);
}

Intern::~Intern()
{
	
}