/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:15:41 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/09 15:28:07 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	Contact::set(int x)
{
	this->exist = x;
}
int	Contact::get()
{
	return (this->exist);
}
void	Contact::set_contact(t_cont *cont)
{
	this->name = cont->name;
	this->last_name = cont->last_name;
	this->nickname = cont->nickname;
	this->darkest_secret = cont->darkest_secret;
	this->phone_number = cont->phone_number;
}

t_cont	Contact::get_contact()
{
	t_cont cont;
	cont.name = this->name;
	cont.last_name = this->last_name;
	cont.nickname = this->nickname;
	cont.phone_number = this->phone_number;
	cont.darkest_secret = this->darkest_secret;
	return (cont);
}


std::string	getdata(std:: string str)
{
	std:: string line;

	while (1)
	{
		std::cout << str;
		if(!std::getline(std::cin, line))
			exit(0);
		if (!line.empty())
			break ;
	}
	return (line);
}

void	ADD(PhoneBook	*phone)
{
	std::string line;
	t_cont		contact;
	
	contact.name = getdata("first_name :");
	contact.last_name = getdata("last_name :");
	contact.phone_number = getdata("phone_number :");
	contact.nickname = getdata("nickname :");
	contact.darkest_secret = getdata("darkest_secret :");
	phone->set_exist(phone->c);
	phone->set_cont(&contact, phone->c);
	phone->c++;
	if (phone->c == 8)
		phone->c = 0;
}

void	print_10(std::string str)
{
	int	i;
	int len = str.length();

	i = 0;
	std::cout <<"|";
	if (str.length() < 10)
	{
		while (i < 10 - len)
		{
			std::cout<< " ";
			i++;
		}
	}
	i = 0;
	while (str[i] && i < 9)
		std::cout << str[i++];
	if (str.length() > 10)
		std::cout<< ".";
	else
		std::cout << str[i++];
}

void	print(std::string str, std::string ch)
{
	std::cout<< str;
	std::cout<< ch << std::endl;
}

void	print_all_contact(PhoneBook	*phone)
{
	int	i;
	t_cont conta;

	i = 0;
	
	while (i < 8 && phone->get_exist(i) == 1)
	{
		if (i == 0)
		{
			std::cout<< "---------------------------------------------"<<std::endl;
			std::cout<< "|                 contacts                  |"<<std::endl;
			std::cout<< "|-------------------------------------------|"<<std::endl;
			std::cout<< "|     index| firs_name| last_name|  nickname|" << std::endl;
			std::cout<< "|-------------------------------------------|"<<std::endl;
		}
		phone->get_cont(&conta, i);
		std::cout << "|         " << i;
		print_10(conta.name);
		print_10(conta.last_name);
		print_10(conta.nickname);
		std:: cout << "|\n";
		i++;
	}
	std::cout<< "---------------------------------------------"<<std::endl;
}

void	SEARCH(PhoneBook	*phone)
{
	t_cont	contact;
	int		ex;
	int		i;
	std::string	line;

	print_all_contact(phone);
	line = getdata("index :");
	if (line.empty())
		return ;
	if (line.length() > 1 || !(line[0] >= '0' && line[0] <= '9'))
	{
		std::cout << "NOT EXIST !!!\n";
		return ;
	}
	i = line[0] - 48;
	ex = phone->get_exist(i);
	if (ex == 1 && i >= 0 && i < 8)
	{
		phone->get_cont(&contact, i);
		print("First name :", contact.name);
		print("Last name :", contact.last_name);
		print("Phone number :", contact.phone_number);
		print("Nickname :", contact.nickname);
		print("Darkest_secret :", contact.darkest_secret);
	}
	else
		std::cout << "NOT EXIST !!!\n";
}