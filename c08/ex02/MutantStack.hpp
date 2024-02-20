/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:53:17 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/13 14:32:53 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iostream>
#include <deque>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
	private:
		
	public:
		MutantStack();
		MutantStack(MutantStack& copy);
		MutantStack& operator=(MutantStack& copy);

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		~MutantStack();
};


#endif