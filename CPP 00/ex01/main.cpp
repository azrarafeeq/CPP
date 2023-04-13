/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:21:41 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/13 21:48:06 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(int argc, char **argv)
{
	PhoneBook phonebook;
	std::string	input;
	(void)argv;
	if (argc != 1)
	{
		std::cout << RED;
		std::cout << "Error: Invalid amount of arguments" << std::endl;
		std::cout << RESET;
		return(0);
	}
	while (1)
	{
		std::cout << SALMON;
		std::cout << "Enter one of the commands:" << std::endl;
		std::cout << RESET;
		std::cout << WHEAT;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << RESET;
		getline(std::cin, input);
		if(std::cin.eof())
		{
			std::cout << RED;
			std::cout << "EOF" << std::endl;
			std::cout << RESET;
			exit(0);
		}
		if (input.compare("ADD") == 0)
		{
			phonebook.add_contact();
			
			
		}
		else if(input.compare("SEARCH") == 0)
			phonebook.search_contact();
		else if (input.compare("EXIT") == 0)
			exit_contact();
		else
		{
			system("clear");
			std::cout << RED;
			std::cout << "Invalid command" << std::endl;
			std::cout << RESET;
		}
	}
}

void	exit_contact(void)
{
	std::cout << RED_BOLD;
	std::cout << "Exiting Phone Book and erasing all contacts" << std::endl;
	std::cout << RESET;
	exit(0);
}

void	right_aligned(std::string str)
{
	size_t i;

	i = 0;
	if (str.length() < 10)
		std::cout << std::setw(10) << str;
	else
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
	std::cout << "|";
}

void	contact_question(std::string question)
{
	std::cout << MUSTARD_YELLOW;
	std::cout << question << std::endl;
	std::cout << RESET;
}

void	eof_field(void)
{
	std::cout << RED;
	std::cout << "EOF" << std::endl;
	std::cout << RESET;
	exit(0);
}

void	empty_field(std::string str)
{
	if (std::cin.eof())
		eof_field();
	if (!str.empty())
		return ;
	else
	{
		std::cout << RED;
		std::cout << "Field cannot be empty!" << std::endl;
		std::cout << RESET;
	}
}

int str_isspace(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (std::isspace(str[i]) == 0)
			return (0);
		else
			i++;
	}
	return (42);
}