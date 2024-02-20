/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:49:42 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/18 19:58:45 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p;
	std::string& strReference=str;
	p = &str;
	
	
	std::cout <<&str <<std:: endl;
	std::cout <<p <<std:: endl;
	std::cout <<&strReference <<std:: endl;

	std::cout <<str <<std:: endl;
	std::cout <<*p <<std:: endl;
	std::cout <<strReference <<std:: endl;
	
	
}