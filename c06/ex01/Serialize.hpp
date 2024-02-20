/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:31:48 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/19 17:43:03 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIAZE_HPP
#define SERIALIAZE_HPP

#include <iostream>

struct Data
{
	int a;
	int b;
	char c;
};


class Serialize
{
	private:
		Serialize();
		Serialize(Serialize& copy);
		Serialize& operator=(Serialize& copy);

	public:
		~Serialize();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};




#endif