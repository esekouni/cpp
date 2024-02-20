/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:55:27 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/16 13:13:12 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool  s;
		const int grade_s;
		const int grade_e;
	public:
		AForm();
		AForm(std::string name, int grade_s, int grade_e);
		AForm(AForm& copy);
		AForm& operator=(AForm& copy);
		std::string get_name() const;
		int get_grade_s() const;
		int get_grade_e() const;
		bool get_sign() const;
		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};
		virtual void beSigned(Bureaucrat B);
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual ~AForm();
};


std::ostream& operator<<(std::ostream& os, const AForm& f);


#endif