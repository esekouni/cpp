/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:56:59 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/22 18:09:48 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string	get_line(char **av)
{
	std::string line;
	int i = 1;
	while (av[i])
	{
		std::string str(av[i]);
		if (!av[i + 1])
			line = line + str;
		else
			line = line + str + " ";
		i++;	
	}
	return (line);
}

int	check_line(std::string line)
{
	unsigned long i = 0;
	while (i < line.length())
	{
		if (line[i] != ' ' && !isdigit(line[i]) && line[i] != '/'
			&& line[i] != '*' && line[i] != '-' && line[i] != '+')
			return (0);
		i++;
	}
	i = 0;
	while (i < line.length())
	{
		if (i != (line.length() - 1) && line[i] != ' ' && line[i + 1] != ' ')
			return (0);
		i++;
	}
	i = 0;
	while (i < line.length())
	{
		while (i < line.length() && line[i] == ' ')
			i++;
		if (isdigit(line[i]))
		{
			i++;
			while (i < line.length() && line[i] == ' ')
				i++;
			if (!isdigit(line[i]))
				return 0;
			else
				return (1);
		}
		else
			return (0);
		i++;
	}
	return (1);
}

int	calcul(int a, int b, char x)
{
	if (x == '+')
		return (a + b);
	else if (x == '-')
		return (a - b);
	else if (x == '*')
		return (a * b);
	else
		return (a / b);
}

std::stack<char>	new_stack(std::stack<char> operat, char *c)
{
	std::stack<char> ne;

	while (operat.size() > 1)
	{
		ne.push(operat.top());
		operat.pop();
	}
	*c = operat.top();
	operat.pop();
	while (ne.size() > 0)
	{
		operat.push(ne.top());
		ne.pop();
	}	
	return (operat);
}

void	RPN(char **av)
{
	std::string line;

	line = get_line(av);
	if (check_line(line) == 0)
	{
		std::cout << "ERROR" << std::endl;
		return ;
	}
	std::stack<int> number;
	std::stack<char> opera;
	unsigned long i = 0;
	while (i < line.length())
	{
		if (isdigit(line[i]))
		{
			while (i < line.length() &&  (isdigit(line[i]) || line[i] == ' '))
			{
				if (isdigit(line[i]))
					number.push(line[i] - 48);
				i++;
			}
			while (i < line.length() &&  (!isdigit(line[i]) || line[i] == ' '))
			{
				if (!isdigit(line[i]) && line[i] != ' ')
					opera.push(line[i]);
				i++;
			}
			int v;
			
			while (number.size() > 1 && opera.size() > 0)
			{
				v = number.top();
				number.pop();
				if (opera.size() > 1)
				{
					char c = '\0';
					opera = new_stack(opera, &c);
					v = calcul(number.top(), v, c);
				}
				else
				{
					v = calcul(number.top(), v, opera.top());
					opera.pop();
				}
				number.pop();
				number.push(v);
			}
		}
		else
			i++;
	}
	if (opera.size() > 0 || number.size() > 1)
	{
		std::cout << "Error" << std::endl;
		exit(0);
	}
	std::cout << number.top() << std::endl;
}
