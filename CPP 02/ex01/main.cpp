/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:27:04 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/11 18:41:08 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	// Fixed const f_n(42.42f);
	// Fixed const i_n(42);
	
	// std::cout << "f_n is " << f_n.toFloat() << " as Float" << std::endl;
	// std::cout << "f_n is " << f_n.toInt() << " as Integer" << std::endl;
	
	// std::cout << "i_n is " << i_n.toFloat() << " as Float" << std::endl;
	// std::cout << "i_m is " << i_n.toInt() << " as Integer" << std::endl;


return 0;
}