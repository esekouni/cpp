/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:19:14 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/13 14:49:48 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> myVector;
	myVector.push_back(0);
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	
	if (easyfind(myVector, 2) == 1)
		std::cout << "The number is exist" << std::endl;
	else
		std::cout << "The number not exist" << std::endl;
}