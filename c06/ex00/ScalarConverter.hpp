/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:14:25 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/26 15:49:11 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALRCONVERTER_HPP
#define SCALRCONVERTER_HPP

#include <iostream>


class ScalarConverter 
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter& copy);
		ScalarConverter& operator=(ScalarConverter& copy);

	public:
		~ScalarConverter();
		static void convert(std::string str);
};



#endif