/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:08 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/20 21:11:45 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
	this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& copy) : name(copy.name)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& copy)
{
	this->grade = copy.grade;
	return (*this);
}

std::string Bureaucrat::get_name() const
{
	return (this->name);
}

int Bureaucrat::get_grade() const
{
	return (this->grade);
}

void	Bureaucrat::increment()
{
	if (this->grade == 1)
		throw GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrement()
{
	if (this->grade == 150)
		throw GradeTooLowException();
	this->grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade Too High");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade Too Low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& B)
{
	os << B.get_name() << ", bureaucrat grade " << B.get_grade() << std::endl;
	return os;
}
