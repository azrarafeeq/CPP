/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:01:13 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/10 16:40:33 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ft_is_char(std::string const str, char ch)
{
	int str_len = str.length();
	int i = 0;

	if (((str.at(i) >= 'a' && str.at(i) <= 'z') || (str.at(i) >= 'A' && str.at(i) <= 'Z')) && str_len == 1)
	{
		ch = str.at(i);
		print_char(ch);
		return (1);
	}
	return (0);
}

int ft_is_int(std::string const str, int in, float fl, double db)
{
	int str_len = str.length();
	int i = -1;

	if (str.at(0) == '+' || str.at(0) == '-')
		i = 0;
	while(++i < str_len)
		if (!(str.at(i) >= '0' && str.at(i) <= '9'))
			return (0);
	if ((atoi(str.c_str()) == -1 && str != "-1") || (atoi(str.c_str()) == 0 && str != "0"))
		return (0);
	else
	{
		in = atoi(str.c_str());
		print_int(in, fl, db);
		return (1);
	}
	return (0);
}

int ft_is_float(std::string const str, int in, float fl, double db)
{
	int str_len = str.length();
	int point_len = 0;
	int i = -1;

	if (str == "-inff" || str == "+inff" || str == "nanf")
	{
		fl = atof(str.c_str());
		print_float(in, fl, db, 1);
		return (1);
	}
	if (str.at(0) == '+' || str.at(0) == '-')
		i = 0;
	while(++i < str_len)
		if (!(str.at(i) >= '0' && str.at(i) <= '9') && str.at(i) != '.' && str.at(i) != 'f' )
			return (0);
	if (str.at(str_len - 1) != 'f')
		return (0);
	i = 0;
	while (i < str_len)
	{
		if (str.at(i) == '.')
		{
			point_len++;
			if (point_len > 1)
				return (0);
		}
		i++;
	}
	if ((atof(str.c_str()) == -1 && str != "-1.0f") || point_len != 1) 
		return (0);
	else
	{
		fl = atof(str.c_str());
		print_float(in, fl, db, 2);
		return (1);
	}
	return (0);
}

int ft_is_double(std::string const str, int in, float fl, double db)
{
	int str_len = str.length();
	int point_len = 0;
	int i = 0;
	
	if (str == "-inf" || str == "+inf" || str == "nan")
	{
		db = atof(str.c_str());
		ft_print_double(in, fl, db, 1);
		return (1);
	}
	
	if (str.at(i) == '+' || str.at(i) == '-')
		i++;
	while(i < str_len)
	{
		if (!(str.at(i) >= '0' && str.at(i) <= '9') && str.at(i) != '.')
			return (0);
		i++;
	}
	i = 0;
	while (i < str_len)
	{
		if (str.at(i) == '.')
		{
			point_len++;
			if (point_len > 1)
				return (0);
		}
		i++;
	}
	if ((atof(str.c_str()) == -1 && str != "-1.0") || point_len != 1)
		return (0);
	else
	{
		fl = atof(str.c_str());
		ft_print_double(in, fl, db, 2);
		return (1);
	}

	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Error: Invalid amount of arguments" << RESET << std::endl;
		return (0);
	}
	else
	{
		std::string str(argv[1]);
		//std::cout << str << std::endl;
		ScalarConverter::convert(str);
	}
}