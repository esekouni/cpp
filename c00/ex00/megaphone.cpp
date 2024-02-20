/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:05:46 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/12 10:06:39 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;
	std::string str;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i] != NULL)
	{
		j = 0;
		str = argv[i];
		while (str[j] != '\0')
		{
			str[j] = std::toupper(str[j]);
			std::cout << str[j];
			j++;
		}
		i++;
	}
    return (0);
}
