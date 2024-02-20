/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:16:15 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/12 12:03:30 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact cont[8];
	public:
		int		c;
		void	init_exist();
		void	set_exist(int i);
		int		get_exist(int i);
		void	set_cont(t_cont *contact, int i);
		void	get_cont(t_cont *contact, int i);
};

void	ADD(PhoneBook	*phone);
void	SEARCH(PhoneBook	*phone);

#endif