/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:20:43 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:30:31 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	// std::cout << GREEN_BOLD;
	// std::cout << "Constructor called!" << std::endl;
	// std::cout << RESET;
}

Harl::~Harl()
{
	// std::cout << RED_BOLD;
	// std::cout << "Destructor called!" << std::endl;
	// std::cout << RESET;
}

void Harl::debug(void)
{
	std::cout << INDIAN_RED;
	//std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra cheese for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << RESET;
}

void Harl::info(void)
{
	std::cout << INDIAN_RED;
	//std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra pickles costs more money." << std::endl;
	std::cout << "You didn't put enough pickles in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	std::cout << RESET;
}

void Harl::warning(void)
{
	std::cout << INDIAN_RED;
	//std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra french fries for free." << std::endl;
	std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
	std::cout << RESET;
}

void Harl::error(void)
{
	std::cout << INDIAN_RED;
	//std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << RESET;
}

void Harl::complain(std::string level)
{
	Harl Harl;
	char l[4][10] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Harl::Harl_pointer ptr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	

	while (i < 4)
	{
		if (level == l[i])
		{
			(Harl.*ptr[i]) ();
			break ;
		}
		i++;
	}
}



// function definition outside of the class
// forest if else