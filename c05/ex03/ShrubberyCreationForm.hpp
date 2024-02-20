/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:19:11 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/20 21:48:18 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

#include <iostream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
		bool	sign;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& copy);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		bool	get_sss() const;
		void	execute(Bureaucrat const & executor) const;
		class signedException : public std::exception
		{
			const char *what() const throw();
		};
		void	Shrubbery_Creation_Form() const;
		void	beSigned(Bureaucrat B);
};





#endif