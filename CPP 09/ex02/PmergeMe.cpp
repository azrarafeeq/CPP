/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:52:34 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/18 21:49:15 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	// std::cout << GREEN_OLIVE;
	// std::cout << "Default Constructor for PmergeMe called" << std::endl;
	// std::cout << RESET;
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	// std::cout << GREEN_LIGHT;
	// std::cout << "Copy constructor for PmergeMe called" << std::endl;
	// std::cout << RESET;
	*this = src;
}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs)
{
	// std::cout << "Copy assignment operator for PmergeMe called" << std::endl;
	if (this != &rhs)
	{
		this->d = rhs.d;
		this->v = rhs.v;
	}
	return *this;
}

PmergeMe::~PmergeMe(void)
{
	// std::cout << RED_LIGHT;
	// std::cout << "Destructor for PmergeMe called" << std::endl;
	// std::cout << RESET;
}

int PmergeMe::sort_deque(int argc, char **argv)
{
	unsigned long elem;
	std::deque<int>::iterator it1, it2, temp_it2;
	clock_t time;
	clock_t time2;

	for (int i = 1; i < argc; i++)
	{
		elem = std::atoi(argv[i]);
		if (elem > INT_MAX)
		{
			std::cout << RED << "Error" << RESET << std::endl;
			return (1);
		}
		d.push_back(elem);
	}
	time = std::clock();
	for (it1 = d.begin() + 1; it1 != d.end(); ++it1)
	{
		int temp = *it1;
		it2 = it1;
		temp_it2 = it2 - 1;
		while (it2 != d.begin() && *(temp_it2) > temp)
		{
			*it2 = *(temp_it2);
			--it2; // advance
			temp_it2 = it2 - 1;
		}
		*it2 = temp;
	}
	time2 = std::clock();
	std::cout << "Before:   ";
	int j = 1;
	while (j < argc)
	{
		std::cout << argv[j] << " ";
		j++;
	}
	std::cout << std::endl;
	std::cout << "After:    ";
	for (it1 = d.begin(); it1 != d.end(); ++it1)
	{
		std::cout << *it1 << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << (argc - 1) << " elements with std::deque  :  ";
	std::cout << (double)(time2 - time)/10000.0 << " hs" << std::endl;
	return (0);
}

void PmergeMe::sort_vector(int argc, char **argv)
{
	int elem;
	std::vector<int>::iterator it1, it2, temp_it2;
	clock_t time;
	clock_t time2;

	for (int i = 1; i < argc; i++)
	{
		elem = std::atoi(argv[i]);
		v.push_back(elem);
	}
	time = std::clock();
	for (it1 = v.begin() + 1; it1 != v.end(); ++it1)
	{
		int temp = *it1;
		it2 = it1;
		temp_it2 = it2 - 1;
		while (it2 != v.begin() && *(temp_it2) > temp)
		{
			*it2 = *(temp_it2);
			--it2; // advance
			temp_it2 = it2 - 1;
		}
		*it2 = temp;
	}
	time2 = std::clock();
	std::cout << "Time to process a range of " << (argc - 1) << " elements with std::vector :  ";
	std::cout << (double)(time2 - time)/10000.0 << " hs" << std::endl;
}