/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:53:20 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/13 14:45:19 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack& copy) : std::stack<T>(copy)
{
	
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack& copy)
{
	std::stack<T>::operator=(copy);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	
}