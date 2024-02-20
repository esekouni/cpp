/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:19:09 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 11:00:46 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->sign = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
	this->sign = false;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& copy)
{
	AForm::operator=(copy);
	this->target = copy.target;
	this->sign = copy.sign;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

bool ShrubberyCreationForm::get_sss() const
{
	return (this->sign);
}

const char * ShrubberyCreationForm::signedException::what() const throw()
{
	return ("not signed");
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->get_sss())
		throw signedException();
	if (executor.get_grade() > this->get_grade_e())
		throw AForm::GradeTooLowException();
	Shrubbery_Creation_Form();
}

void	ShrubberyCreationForm::beSigned(Bureaucrat B)
{
	if (B.get_grade() > this->get_grade_s())
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->sign = true;
}

void	ShrubberyCreationForm::Shrubbery_Creation_Form() const
{
	std::ofstream shrubbery(this->target + "_shrubbery");
	
	if (shrubbery.is_open())
	{
		shrubbery << "       _-_" << std::endl;
		shrubbery << "    /~~   ~~\\" << std::endl;
		shrubbery << " /~~         ~~\\" << std::endl;
		shrubbery << "{               }" << std::endl;
		shrubbery << "\\  _-     -_  /" << std::endl;
		shrubbery << "   ~  \\ //  ~" << std::endl;
		shrubbery << " _- -   | | _- _" << std::endl;
		shrubbery << "  _ -  | |   -_" << std::endl;
		shrubbery << "      // \\" << std::endl;
		shrubbery.close();
	}
	else
		std::cerr << "Failed to open the file" << std::endl;
}