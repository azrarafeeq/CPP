/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:44:05 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/20 21:16:16 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	// std::cout << GREEN_OLIVE;
	// std::cout << "Default Constructor for RPN called" << std::endl;
	// std::cout << RESET;
	flag = 0;
}

RPN::RPN(RPN const &src)
{
	// std::cout << GREEN_LIGHT;
	// std::cout << "Copy constructor for RPN called" << std::endl;
	// std::cout << RESET;
	*this = src;
}

RPN & RPN::operator=(RPN const & rhs)
{
	// std::cout << "Copy assignment operator for RPN called" << std::endl;
	if (this != &rhs)
	{
		this->stack = rhs.stack;
		this->flag = rhs.flag;
	}
	return *this;
}

RPN::~RPN(void)
{
	// std::cout << RED_LIGHT;
	// std::cout << "Destructor for RPN called" << std::endl;
	// std::cout << RESET;
}

int RPN::getFlag(void)
{
	return (flag);
}

int RPN::parse(std::string expression)
{
	int begin = 0;
	int num_count = 0;
	int op_count = 0;
	std::string::iterator it = expression.begin();

	while (it != expression.end())
	{
		while (isOperand(*it) == 1)
		{
			num_count++;
			it++;
			while (*it == ' ')
				it++;
		}
		while (isOperator(*it) == 1)
		{
			op_count++;
			it++;
			while (*it == ' ')
				it++;
		}
		if (num_count != op_count && begin == 1)
		{
			std::cout << RED << "Invalid RPN expression" << RESET << std::endl;
			return (1);
		}
		else if (num_count != (op_count + 1) && begin == 0)
		{
			std::cout << RED << "Invalid RPN expression" << RESET << std::endl;
			return (1);
		}
		while (*it == ' ' && it != expression.end())
			it++;
		op_count = 0;
		num_count = 0;
		begin = 1;
	}
	return (0);
}

int RPN::do_op(int a, int b, char op)
{
	if(op == '+')
		return (b + a);
	else if(op == '-')
		return (b - a);
	else if(op == '*')
		return (b * a);
	else
	{
		if (a == 0)
		{
			std::cout << RED << "Error: Tried to divide by 0" << RESET << std::endl;
			flag = 1;
			return (-1);
		}
		return (b / a);
	}
}

int RPN::RPN_algorithm(std::string expression)
{
	int a, b, res;
	std::string::iterator it;
	
	it = expression.begin();
	while(it != expression.end())
	{
		if(isOperator(*it) == 1)
		{
			a = stack.top();
			stack.pop();
			b = stack.top();
			stack.pop();
			res = do_op(a, b, *it);
			if (res == -1 && flag == 1)
				return (-1);
			stack.push(res);
		}
		else if(isOperand(*it) == 1)
		{
			if (*it == '0')
			{
				while (*it != ' ' && it != expression.end())
					++it;
				--it;
			}
			stack.push((*it - '0'));
		}
		it++;
	}
	return (stack.top());
}