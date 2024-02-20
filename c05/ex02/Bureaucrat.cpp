/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:08 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/20 21:37:29 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("")
{
	this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int n) : name(name)
{
	if (n < 1)
		throw GradeTooHighException();
	else if (n > 150)
		throw GradeTooLowException();
	this->grade = n;
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

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.get_name() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "can't executed because " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(AForm & F)
{
	try
	{
		F.beSigned(*this);
		std::cout << this->name << " signed " << F.get_name() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << F.get_name() << "because " << e.what() << std::endl;
	}
}

