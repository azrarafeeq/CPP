/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 16:42:49 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/06 19:33:55 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define GREEN "\033[0;32m"
# define RESET "\033[0m"

class ScalarConverter{
	public:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src); // copy constructor
		ScalarConverter & operator=(ScalarConverter const & rhs); // assignment operator overload
		~ScalarConverter(void);
		
		// memebr function(s)
		void convert(std::string literal);
};

// CHECKERS

int ft_is_char(std::string const str, char ch);
int	ft_is_int(std::string const str, int in, float fl, double db);
int	ft_is_float(std::string const str, int in, float fl, double db);
int	ft_is_double(std::string const str, int in, float fl, double db);

// PRINT

void print_char(char c);
void print_int(int in, float fl, double db);
void print_float(int in, float fl, double db, int flag);
void ft_print_double(int in, float fl, double db, int flag);

#endif