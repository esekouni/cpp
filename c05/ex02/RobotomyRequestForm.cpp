/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:56:22 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/22 17:09:09 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 25, 5)
{
	this->target = "";
	this->sign = false;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 25, 5)
{
	this->target = target;
	this->sign = false;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy) : AForm("RobotomyRequestForm", 25, 5)
{
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& copy)
{
	AForm::operator=(copy);
	this->target = copy.target;
	this->sign = copy.sign;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

bool RobotomyRequestForm::get_sss() const
{
	return (this->sign);
}

const char * RobotomyRequestForm::signedException::what() const throw()
{
	return ("not signed");
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	if (!this->get_sss())
		throw signedException();
	if (executor.get_grade() > this->get_grade_e())
		throw AForm::GradeTooLowException();
	if (std::rand() % 2 == 0)
	{
		std::cout << this->target << "  has been robotomized successfully 50% of the time" << std::endl;
	}
	else
	{
		std::cout << "the robotomy failed" << std::endl;
	}
}

void	RobotomyRequestForm::beSigned(Bureaucrat B)
{
	if (B.get_grade() > this->get_grade_s())
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->sign = true;
}