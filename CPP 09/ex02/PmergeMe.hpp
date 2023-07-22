/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:52:50 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/18 19:38:37 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <ctime>
#include <climits>
#include <cstdlib> 
#include <deque>
#include <vector>

class PmergeMe{
	private:
		std::deque<int> d;
		std::vector<int> v;
	public:
		PmergeMe();
		PmergeMe(PmergeMe const & src);
		PmergeMe & operator=(PmergeMe const & rhs);
		~PmergeMe();
		int sort_deque(int argc, char **argv);
		void sort_vector(int argc, char **argv);
};

# endif