/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:45:51 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/16 19:07:14 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(2);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);

	// std::vector<int> v = {6, 3, 17, 9, 11};
	std::vector<int> vec;
	vec.push_back(6);
	vec.push_back(3);
	vec.push_back(17);
	vec.push_back(9);
	vec.push_back(11);
	
	try
	{
		sp.betterAddNumber(vec);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what();
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}