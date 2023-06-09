/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:42:28 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/06 18:08:37 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for ScalarConverter called" << std::endl;
	std::cout << RESET;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for ScalarConverter called" << std::endl;
	std::cout << RESET;
	*this = src;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	(void)rhs;
	std::cout << "Copy assignment operator for ScalarConverter called" << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for ScalarConverter called" << std::endl;
	std::cout << RESET;
}

void ScalarConverter::convert(std::string literal)
{
	// non displayable characters shouldn’t be used a inputs.

	// variables for conversion
	char ch = '\0';
	int in = 0;
	float fl = 0.0;
	double db = 0.0;

	// scalar types
	// 1. char
	if (ft_is_char(literal, ch))
		return ;
	// 2. int
	if (ft_is_int(literal, in, fl, db))
		return ;
	// 3. float
	if (ft_is_float(literal, in, fl, db))
		return ;
	// 4. double
	if (ft_is_double(literal, in, fl, db))
		return ;

	std::cout << RED << "The literal is neither a char, an int, a float or a double !" << RESET << std::endl;
}