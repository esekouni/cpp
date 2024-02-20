/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:47:41 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/21 11:43:06 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 72, 45)
{
	this->sign = false;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 72, 45)
{
	this->target = target;
	this->sign = false;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& copy) : AForm("PresidentialPardonForm", 72, 45)
{
	*this = copy;
}

bool PresidentialPardonForm::get_sss() const
{
	return (this->sign);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& copy)
{
	AForm::operator=(copy);
	this->target = copy.target;
	this->sign = copy.sign;
	
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

const char * PresidentialPardonForm::signedException::what() const throw()
{
	return ("not signed");
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->get_sss())
		throw signedException();
	if (executor.get_grade() > this->get_grade_e())
		throw AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::beSigned(Bureaucrat B)
{
	if (B.get_grade() > this->get_grade_s())
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->sign = true;
}