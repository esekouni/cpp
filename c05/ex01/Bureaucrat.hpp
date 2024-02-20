/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:12 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/20 21:13:36 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const name;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat& copy);
		Bureaucrat(std::string name, int n);
		Bureaucrat& operator=(Bureaucrat& copy);
		std::string get_name() const;
		int get_grade() const;
		class 	GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class 	GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		void	increment();
		void	decrement();
		void	signForm(Form & F);
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& B);


#endif