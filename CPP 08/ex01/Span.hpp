/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:22:05 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/16 18:58:46 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class MoreThanAllowed : public std::exception
{
	public:
		virtual const char * what () const throw () {
			return ("\033[0;31mError: Trying to insert elemenst more than possible! \033[0m\n");
		}
};

class Span{
	private:
		unsigned int mem;
		std::vector<int> nums;
		Span(void); // default constructor
	public:
		Span(int num);
		Span(Span const &src); // Copy Constructor
		Span & operator=(Span const & rhs); // copy assignmnet operator overload
		~Span(void);
		
		//member function
		void addNumber(int numToAdd);
		void betterAddNumber(std::vector<int> vec);
		int shortestSpan(void);
		int longestSpan(void);
};

#endif
