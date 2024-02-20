/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 10:30:12 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/20 21:12:10 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		std::string const name;
		int	grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& copy);
		Bureaucrat& operator=(Bureaucrat& copy);
		std::string get_name() const;
		int get_grade() const;
		class 	GradeTooHighException : public std::exception {
			const char *what() const throw();
		};
		class 	GradeTooLowException : public std::exception {
			const char *what() const throw();
		};
		void	increment();
		void	decrement();
		~Bureaucrat();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& B);


#endif