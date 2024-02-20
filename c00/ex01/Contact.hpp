/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:15:59 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/08 16:07:50 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

typedef struct s_cont
{
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	phone_number;
}t_cont;

class Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		std::string	phone_number;
		int exist;
	public:
		void	set(int x);
		void	set_contact(t_cont *cont);
		t_cont	get_contact();
		int		get();
		std::string	get_data(std::string str);
};



#endif