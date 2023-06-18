/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:39:49 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/16 18:58:26 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for Span called" << std::endl;
	std::cout << RESET ;
}

Span::Span(int num)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for Span called" << std::endl;
	std::cout << RESET ;
	if (num <= 0)
		mem = 0;
	else
		mem = num;
}

Span::Span(Span const &src)
{
	std::cout << GREEN_LIGHT << "Copy constructor for Span called" << std::endl << RESET;
	*this = src;
}

Span & Span::operator=(Span const & rhs)
{
	std::cout << "Copy assignment operator for Span called" << std::endl;
	this->mem = rhs.mem;
	return (*this);
}

Span::~Span(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Span class called" << std::endl;
	std::cout << RESET;
}

void Span::addNumber(int numToAdd)
{
	// find length of the contaner and throw exception if length = this->size
	unsigned int size = nums.size();
	try
	{
		if (size == this->mem)
			throw MoreThanAllowed();
		else
			nums.push_back(numToAdd);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}
}

void Span::betterAddNumber(std::vector<int> vec)
{
	unsigned int size = nums.size();
	unsigned int vec_size = vec.size();
	if ((size + vec_size) > mem)
		throw MoreThanAllowed();
	nums.insert(nums.end(), vec.begin(), vec.end());
}

int Span::shortestSpan(void)
{
	// find the shortest span
	int size = nums.size();
	sort(nums.begin(), nums.end());
	// std::cout << "Size = " << size << std::endl;
	int i = 0;
	int shortest_span = 0;
	int span = 0;
	while  ((i + 1) < size)
	{
		if (nums.at(i) >= nums.at(i + 1))
			span = nums.at(i) - nums.at(i + 1);
		else
			span = nums.at(i + 1) - nums.at(i);
		if (i == 0 || span < shortest_span)
			shortest_span = span;
		i++;
	}
	return(shortest_span);
		
}

int Span::longestSpan(void)
{
	// find the longest span
	int size = nums.size();
	int longest_span = 0;
	sort(nums.begin(), nums.end());
	if (size > 1)
		longest_span = nums.at(size - 1) - nums.at(0);
	return(longest_span);
}

// the better addnum function
