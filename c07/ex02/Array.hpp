/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:03:51 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/29 13:16:46 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>


template <typename T>
class Array
{
	private:
		T *array;
		unsigned lenth;
	public:
		Array()
		{
			array = new T;
		}
		
		Array(unsigned int l)
		{
			array = new T[l];
			unsigned int i = 0;
			
			lenth = l;
			while (i < l)
				array[i++] = 1;
		}

		Array(Array& copy)
		{
			*this = copy;
		}
		
		Array& operator=(Array& copy)
		{
			unsigned int i = 0;
			
			while (i < lenth)
			{
				this->array[i] = copy.Array[i];
				i++;
			}
			return (*this);
		}
		
		T& operator[](unsigned int index)
		{
			if (index < 0 || index >= lenth)
				throw std::out_of_range("Index out of range");
			return (array[index]);
		}
		
		void	display()
		{
				unsigned int i = 0;
				while (i < lenth)
				{
					std::cout << array[i] << std::endl;
					i++;
				}
		};
		
		unsigned int size()
		{
			return (lenth);
		}

		~Array()
		{
			delete array;
		};
};



#endif