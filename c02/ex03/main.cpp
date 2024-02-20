/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 22:45:07 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/26 20:05:36 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point const a(0, 0);
    Point const b(4, 4);
    Point const c(0, 8);
    Point const x(0, 4);

    bool result = bsp(a, b, c, x);
    if (result)
        std::cout << "the point x [BELONG] to the traingle abc" << std::endl;
    else
        std::cout << "the point x [DOESN'T BELONG] to the traingle abc" << std::endl;
    return (0);
}