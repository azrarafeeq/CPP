/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:55:36 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/15 18:53:43 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::list<int>	int_list;
	std::vector<int> int_vector;
	
	int_list.push_back(42);
	int_list.push_back(4);
	int_list.push_back(8);
	int_list.push_back(25);

	int_vector.push_back(1);
	int_vector.push_back(2);
	int_vector.push_back(3);
	
	try{
		std::list<int>::iterator v_occur = easyfind(int_list, 42);
		std::cout << "Occurance of number in vector found: " << *v_occur << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
	}
	try{
		std::vector<int>::iterator l_occur = easyfind(int_vector, 2);
		std::cout << "Occurance of number in list found: " << *l_occur << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
	}
}