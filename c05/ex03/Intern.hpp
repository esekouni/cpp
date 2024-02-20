/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:18:55 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 10:53:32 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <exception>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		
	public:
		Intern();
		Intern(Intern& copy);
		AForm * makeForm(std::string name, std::string target);
		// ShrubberyCreationForm * new_ShrubberyCreationForm(std::string target);
		// PresidentialPardonForm * new_PresidentialPardonForm(std::string target);
		// RobotomyRequestForm * new_RobotomyRequestForm(std::string target);
		class Intern_exeption : public std::exception 
		{
			const char * what() const throw();
		};
		~Intern();
};



#endif