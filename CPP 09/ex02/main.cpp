/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 21:51:49 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/18 20:34:21 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// --- Ford-Johnson algorithm---

int main(int argc, char **argv)
{
	// -- kindof no idea -- 
	// error check: no numbers
	if (argc < 2)
	{
		std::cout << RED << "Error: No Numbers Provided." << RESET << std::endl;
		return (0);
	}
	// error check: positive numbers only
	int j = 1;
	int i = 0;
	while (j < argc)
	{
		if (argv[j][0] == '+')
		{
			if (argv[j][1])
			{
				if (!(argv[j][1] >= '0' && argv[j][1] <= '9'))
				{
					std::cout << RED << "Error" << RESET << std::endl;
					return (0);
				}
			}
			else
			{
				std::cout << RED << "Error" << RESET << std::endl;
				return (0);
			}
			i++;
		}
		while (argv[j][i])
		{
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
			{
				std::cout << RED << "Error" << RESET << std::endl;
				return (0);
			}
			i++;
		}
		i = 0;
		j++;
	}
	PmergeMe p;
	if (p.sort_deque(argc, argv) == 0)
		p.sort_vector(argc, argv);
}