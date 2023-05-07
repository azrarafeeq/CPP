/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:42:11 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/30 23:12:56 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid amount of arguments" << std::endl;
		return(0);
	}
	Harl Harl;
	char level[4][10] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;

	i = 0;
	//level level;
	int l;
	l = i;
	
	//colourize everything
	while (i < 4)
	{
		if (strcmp(argv[1], level[i]) == 0)
		{
			l = i + 1;
			break ;
		}
		i++;
	}
	// if (strcmp(argv[1], "DEBUG") == 0)
	// 	level = DEBUG;
	// else if (strcmp(argv[1], "INFO") == 0)
	// 	level = INFO;
	// else if (strcmp(argv[1], "WARNING") == 0)
	// 	level = WARNING;
	// else if (strcmp(argv[1], "ERROR") == 0)
	// 	level = ERROR;
	// else
	// 	level = NONE;
	switch (l)
	{
		case 1:
			Harl.complain("DEBUG");
		case 2:
			Harl.complain("INFO");
		case 3:
			Harl.complain("WARNING");
		case 4:
			Harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}