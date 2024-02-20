/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:14:22 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/29 22:09:36 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>
#include <iomanip>

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(ScalarConverter& copy)
{
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& copy)
{
	(void)copy;
	return (*this);
}

void	convert_to_int(double x, std::string end, std::string str)
{
	int i;

	if (x > std::numeric_limits<int>::max() || x < std::numeric_limits<int>::min())
	{
		std::cout << "int : impossible" << std::endl;
		return ;
	}
	if (x != x)
	{
		std::cout << "int : impossible" << std::endl;
		return ;
	}
	if (str.length() == 1 && end.length() == 1)
	{
		i = end[0];
	}
	else
		i = static_cast<int>(x);
	std::cout << "int : " << i << std::endl;
}


int		count(std::string str)
{
	int i = 0;
	int c = 0;
	int len = str.length();
	while (i < len && str[i] != '.')
		i++;
	if (str[i] == '.')
		i++;
	if (i == len)
		return (1);
	while (i < len && isdigit(str[i]) == 1)
	{
		i++;
		c++;
	}
	return (c);
}

void	convert_to_char(double x, std::string end, std::string str)
{
	char	c;

	if ((x <= 22 || x >= 127) && end.length() == 0)
	{
		std::cout << "char : Non displayable" << std::endl;
		return ;
	}
	if (x != x)
	{
		std::cout << "char : impossible" << std::endl;
		return ;
	}
	if (str.length() == 1)
		c = end[0];
	else
		c = static_cast<char>(x);
	std::cout << "char : \"" << c << "\""<< std::endl;
}

void	convert_to_float(double x, std::string end, std::string str)
{
	float f;

	if (x != x)
	{
		std::cout << "float : nanf" << std::endl;
		return ;
	}
	if (str.length() == 1 && end.length() == 1)
		f = end[0];
	else
		f = static_cast<float>(x);
	std::cout << std::fixed << std::setprecision(count(str)) << "float : " << f << "f" << std::endl;

}

void	convert_to_double(double x, std::string end, std::string str)
{
	double d;
	if (x != x)
	{
		std::cout << "double : nan" << std::endl;
		return ;
	}
	if (str.length() == 1 && end.length() == 1)
		d = end[0];
	else
		d = x;
	std::cout << std::fixed << std::setprecision(count(str)) << "double : " << d << std::endl;
}


void ScalarConverter::convert(std::string str)
{
	double x;
	char	*endp = NULL;
	
	x = std::strtod(str.c_str(), &endp);
	std::string end(endp);
	// std::cout << "x == " << x <<
	// std::cout << "end == " << end << std::endl;
	if ((end.length() == 0 || (end.length() < 2 && (end == "f" || isalpha(end[0])))))
	{
		convert_to_char(x, end, str);
		convert_to_int(x, end, str);
		convert_to_float(x, end , str);
		convert_to_double(x, end, str);
	}
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}
}

ScalarConverter::~ScalarConverter()
{
	
}
