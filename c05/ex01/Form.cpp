/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:55:24 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/21 15:02:27 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form()  : name(""), grade_s(1), grade_e(1)
{
	this->s = false;
}

Form::Form(std::string name , int grade_s, int grade_e)  : name(name), grade_s(grade_s), grade_e(grade_e)
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

Form::Form(Form& copy) : name(copy.get_name()), grade_s(copy.get_grade_s()), grade_e(copy.get_grade_e())
{
	this->s = copy.s;
}

std::string Form::get_name() const
{
	return (this->name);
}

int Form::get_grade_e() const
{
	return (this->grade_e);
}

int Form::get_grade_s() const
{
	return (this->grade_s);
}

bool Form::get_sign() const
{
	return (this->s);
}

Form& Form::operator=(Form& copy)
{
	this->s = copy.get_sign();
	return (*this);
}

void	Form::beSigned(Bureaucrat B)
{
	if (B.get_grade() > this->grade_s)
		throw GradeTooLowException();
	this->s = true;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low");
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << f.get_name() << ", form sign is "<< f.get_sign() << " grade required to sign " << f.get_grade_s() << " grade required to execut "<< f.get_grade_e()<< std::endl;
	return os;
}

Form::~Form()
{
	
}