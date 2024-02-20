/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:54:02 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/13 14:44:43 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <vector>
#include <algorithm>


class Span
{
	private:
		unsigned int N;
		std::vector<int>ve;
	public:
		Span();
		Span(unsigned int n);
		void	addNumber(int n);
		void	print();
		int		shortestSpan();
		int		longestSpan();
		void 	add_numbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		~Span();
};



#endif