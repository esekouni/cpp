/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:34:08 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/22 14:47:39 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac , char **av)
{
	if (ac > 1)
	{
		if (sort_vector(av) == 0)
		{
			std::cout << "Error : " << std::endl;
			return (0);
		}
		if (sort_deque(av) == 0)
		{
			std::cout << "Error : " << std::endl;
			return (0);
		}
	}
}
