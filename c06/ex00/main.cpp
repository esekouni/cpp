/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:14:20 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/26 15:01:20 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	std::string str(av[1]);
	if (ac == 2 && str.length() > 0)
	{
		ScalarConverter::convert(str);
	}
	return (0);
}
