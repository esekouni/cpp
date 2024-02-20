/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:55:24 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/21 12:05:42 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm()  : name(""), grade_s(1), grade_e(1)
{
	this->s = false;
}

AForm::AForm(std::string name, int grade_s, int grade_e)  : name(name), grade_s(grade_s), grade_e(grade_e)
{
	if (grade_s < 1)
		throw GradeTooHighException();
	else if (grade_s > 150)
		throw GradeTooLowException();
		if (grade_e < 1)
		throw GradeTooHighException();
	else if (grade_e > 150)
		throw GradeTooLowException();
	this->s = false;
}

AForm::AForm(AForm& copy) : name(copy.get_name()), grade_s(copy.get_grade_s()), grade_e(copy.get_grade_e())
{
	this->s = copy.s;
}

std::string AForm::get_name() const
{
	return (this->name);
}

int AForm::get_grade_e() const
{
	return (this->grade_e);
}

int AForm::get_grade_s() const
{
	return (this->grade_s);
}

bool AForm::get_sign() const
{
	return (this->s);
}

AForm& AForm::operator=(AForm& copy)
{
	this->s = copy.get_sign();
	return (*this);
}

void	AForm::beSigned(Bureaucrat B)
{
	if (B.get_grade() > this->grade_s)
		throw GradeTooLowException();
	this->s = true;
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

std::ostream& operator<<(std::ostream& os, const AForm& f)
{
	os << f.get_name() << ", form sign is "<< f.get_sign() << "grade required to sign " << f.get_grade_s() << " grade required to execut "<< f.get_grade_e()<< std::endl;
	return os;
}

AForm::~AForm()
{
	
}