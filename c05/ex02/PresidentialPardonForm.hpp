/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:47:39 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/20 21:46:42 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAPARDONFORM_HPP
#define PRESIDENTIAPARDONFORM_HPP


#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
		bool	sign;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm& copy);
		PresidentialPardonForm& operator=(PresidentialPardonForm& copy);
		~PresidentialPardonForm();
		bool	get_sss() const;
		void	execute(Bureaucrat const & executor) const;
		class signedException : public std::exception
		{
			const char *what() const throw();
		};
		void	beSigned(Bureaucrat B);
};






#endif