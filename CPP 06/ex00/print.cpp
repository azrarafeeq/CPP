/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:06:20 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/10 11:48:01 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void print_char(char c)
{
	std::cout << GREEN << "Type of the Literal is CHARACTER" << RESET << std::endl;
	std::cout << "char: " << c << std::endl;;
	std::cout << "int: Not Possible" << std::endl;
	std::cout << "float: Not Possible" << std::endl;
	std::cout << "double: Not Possible" << std::endl;
}

void print_int(int in, float fl, double db)
{
	fl = static_cast<float>(in);
	db = static_cast<double>(in);
	std::cout << GREEN << "Type of the Literal is INTEGER" << RESET << std::endl;
	std::cout << "char: Not displayable" << std::endl;
	std::cout << "int: " << in << std::endl;
	std::cout << "float: " << fl << ".0f" << std::endl;
	std::cout << "double: " << db << ".0" << std::endl;
}

void print_float(int in, float fl, double db, int flag)
{
	if (flag == 1)
	{
		db = static_cast<double>(fl);
		std::cout << GREEN << "Type of the Literal is FLOAT" << RESET << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << fl << "f" << std::endl;
		std::cout << "double: " << db << std::endl;
	}
	else if (flag == 2)
	{
		in = static_cast<int>(fl);
		db = static_cast<double>(fl);
		std::cout << GREEN << "Type of the Literal is FLOAT" << RESET << std::endl;
		std::cout << "char: Not displayable" << std::endl;
		std::cout << "int: " << in << std::endl;
		std::cout << "float: " << fl << "f" << std::endl;
		std::cout << "double: " << db << std::endl;
	}
	/// printing .0 after whole numbers for float and double (ex: 42.0)
}

void ft_print_double(int in, float fl, double db, int flag)
{
	(void)in;
	if (flag == 1)
	{
		fl = static_cast<double>(db);
		std::cout << GREEN << "Type of the Literal is DOUBLE" << RESET << std::endl;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << fl << "f" << std::endl;
		std::cout << "double: " << db << std::endl;
	}
	else if (flag == 2)
	{
		in = static_cast<int>(fl);
		db = static_cast<double>(fl);
		std::cout << GREEN << "Type of the Literal is DOUBLE" << RESET << std::endl;
		std::cout << "char: Not displayable" << std::endl;
		std::cout << "int: " << in << std::endl;
		std::cout << "float: " << fl << "f" << std::endl;
		std::cout << "double: " << db << std::endl;
	}
	// printing .0 after whole numbers but double
}