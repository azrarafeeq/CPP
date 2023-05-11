/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 17:49:31 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/11 18:21:49 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	// Fixed Fiexd1(21);
	// Fixed Fiexd2(20);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	// if (Fiexd1 < Fiexd2)
	// 	std::cout << "Fiexd2 is bigger than Fiexd1" << std::endl;
	// else
	// 	std::cout << "Fiexd1 is bigger than Fiexd2" << std::endl;
	return 0;
}