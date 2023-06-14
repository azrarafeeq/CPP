/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:58:23 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/13 21:38:36 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main(void)
// {
// 	int a = 4;
// 	int b = 2;

// 	std::cout << "the max is: "<< max<int>(3, 9) << std::endl;
// 	std::cout << "the min is: "<< min<int>(3, 9) << std::endl;
// 	std::cout << "-----BEFORE------" << std::endl;
// 	std::cout << "a is : "<< a << std::endl;
// 	std::cout << "b is : "<< b << std::endl;
// 	swap<int>(a, b);
// 	std::cout << "-----AFTER------" << std::endl;
// 	std::cout << "a is : "<< a << std::endl;
// 	std::cout << "b is : "<< b << std::endl;
// }

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}