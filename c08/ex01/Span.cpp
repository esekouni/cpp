/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:58 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/13 14:23:39 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span()
{
	N = 0;
}

Span::Span(unsigned int n)
{
	N = n;
}

void Span::addNumber(int n)
{
	if (ve.size() == N)
		throw std::out_of_range("out of the size of span");
	else
		ve.push_back(n);
}

void Span::add_numbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin < end)
	{
		addNumber(*begin);
		begin++;
	}
}

void	Span::print()
{
	if (ve.size() < 2)
		throw std::invalid_argument("Error : There aren`t a lot of numbers");
	for(std::vector<int>::iterator it = ve.begin() ; it != ve.end() ; ++it)
		std::cout << *it << std::endl;
}

int	Span::shortestSpan()
{
	unsigned int j = 1;
	std::vector<int> vect;
	if (ve.size() < 2)
		throw std::invalid_argument("Error : There aren`t a lot of numbers");
	for(std::vector<int>::iterator t = ve.begin() ; t != ve.end() ; ++t)
	{
		for(std::vector<int>::iterator te = ve.begin() + j; te != ve.end() ; ++te)
		{
			vect.push_back(std::abs(*t - *te));
			
		}
		j++;
		if (j == ve.size())
			break ;
	}
	return (*(std::min_element(vect.begin(), vect.end())));
}

int	Span::longestSpan()
{
	int a;

	a = *(std::max_element(ve.begin(), ve.end())) - *(std::min_element(ve.begin(), ve.end()));

	return (a);
}

Span::~Span()
{
	
}
