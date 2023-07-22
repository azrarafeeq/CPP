/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:42:55 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/20 20:48:12 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// ---REVERSE POLISH NOTATION---

int isOperator(char ch)
{
	if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/')
		return (1);
	return (-1);
}
int isOperand(char ch)
{
	if(ch >= '0' && ch <= '9')
		return (1);
	return (-1);
}


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Error: Invalid Amount of Arguments" << RESET << std::endl;
		return (0);
	}
	int i = 0;
	
	while (argv[1][i])
	{
		if (!(argv[1][i] >= 48 && argv[1][i] <= 57) && argv[1][i] != '+' &&
			argv[1][i] != '-' && argv[1][i] != '*' && argv[1][i] != '/' && argv[1][i] != ' ')
		{
			std::cout << RED << "Error: Invalid Character(s) in Argument" << RESET << std::endl;
			return (-1);
		}
		if (((argv[1][i] >= 49 && argv[1][i] <= 57) || 
			(argv[1][i] == '+' || argv[1][i] == '-')) && argv[1][i + 1])
		{
			if (!(argv[1][i + 1] == ' ' || !argv[1][i + 1]))
			{
				std::cout << RED << "Error: Invalid Operand / Operator" << RESET << std::endl;
				return (-1);
			}
		}
		i++;
	}
	
	std::string expression = argv[1];
	RPN main;
	int result;
	if (main.parse(expression) != 1)
	{
		result = main.RPN_algorithm(expression);
		if (main.getFlag() == 0)
			std::cout << result << std::endl;
	}
}