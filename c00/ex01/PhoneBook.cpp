/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:37:17 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/12 12:26:25 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::init_exist()
{
	int j;
	j = 0;
	while (j < 8)
		cont[j++].set(0);
}

void	PhoneBook::set_exist(int i)
{
	cont[i].set(1);
}

int	PhoneBook::get_exist(int i)
{
	return cont[i].get();
}

void	PhoneBook::set_cont(t_cont *contact, int i)
{
	cont[i].set_contact(contact);
}

void	PhoneBook::get_cont(t_cont *contact, int i)
{
	*contact = cont[i].get_contact();
}

int main()
{
	std::string line;
	PhoneBook	phone;

	phone.c = 0;
	phone.init_exist();
	while (1)
	{
		std::cout<< "Enter command:";
		std::getline(std::cin, line);
		if (std::cin.fail())
			return (0);
		if (line == "ADD")
			ADD(&phone);
		else if (line == "SEARCH")
			SEARCH(&phone);
		else if (line == "EXIT")
			break ;
	}
	
}