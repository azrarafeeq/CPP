/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:43:55 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/20 20:31:29 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <string>
#include <algorithm>
#include <stack> // stack is a container adapter, not a container
// by default the container will be dequeue if not spcified while decalaring a stack
#include <list>

class RPN{
	private:
		std::stack<int, std::list<int> > stack;
		int flag;
	public:
		RPN(void);
		RPN(RPN const &src);
		RPN & operator=(RPN const & rhs);
		~RPN(void);
		int getFlag(void);
		int parse(std::string expression);
		int RPN_algorithm(std::string expression);
		int do_op(int a, int b, char op);
};
	int isOperator(char ch);
	int isOperand(char ch);

# endif