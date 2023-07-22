/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:41:13 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/20 14:20:58 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Error: could not open file." << RESET << std::endl;
		return (0);
	}
	std::ifstream in(argv[1]);
	if (!in)
	{
		std::cout << RED << "Error: File does not exist." << RESET << std::endl;
		in.close();
		return (0);
	}
	in.close();
	
	BitcoinExchange btc;
	
	btc.take_input_calc(argv[1]);
}