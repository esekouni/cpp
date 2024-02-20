/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:31:40 by esekouni          #+#    #+#             */
/*   Updated: 2023/11/26 16:12:16 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data d;
	Data *a;
	uintptr_t s;

	d.a = 5;
	d.b = 6;
	d.c = 'a';

	std::cout << "d == " << &d << std::endl;
	s = Serialize::serialize(&d);
	std::cout << "s == " << s << std::endl;
	a = Serialize::deserialize(s);
	std::cout << "a == " << a << std::endl;
	return 0;
}
