/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:56:24 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/20 21:49:24 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
		bool	sign;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm& copy);
		RobotomyRequestForm& operator=(RobotomyRequestForm& copy);
		void	execute(Bureaucrat const & executor) const;
		bool	get_sss() const;
		class signedException : public std::exception
		{
			const char *what() const throw();
		};
		void	beSigned(Bureaucrat B);
		~RobotomyRequestForm();
};





#endif