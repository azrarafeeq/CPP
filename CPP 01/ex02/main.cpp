/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:42:46 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/30 21:49:43 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define SALMON_LIGHT "\033[1;38:5:137m"
#define MUSTARD "\033[1;38:5:136m"
#define TURQUOISE "\033[38:5:30m"
#define RESET "\033[0m"

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	
	std::cout << TURQUOISE;
	std::cout << "Memory Address of string = " << &string << std::endl;
	std::cout << "Memory Address of stringPTR = " << &stringPTR << std::endl;
	std::cout << "Memory Address of stringREF = " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << RESET;
	
	// std::cout << SALMON_LIGHT;
	// std::cout << "----BEFORE----" << std::endl;
	// std::cout << RESET;
	
	std::cout << "\033[38:5:137m";
	std::cout << "Value of string = " << string << std::endl;
	std::cout << "Value of stringPTR = " << *stringPTR << std::endl;
	std::cout << "Value of stringREF = " << stringREF << std::endl;
	std::cout << std::endl;
	std::cout << RESET;
	
	// std::cout << MUSTARD;
	// std::cout << "----AFTER----" << std::endl;
	// std::cout << RESET;
	
	// std::cout << "\033[38:5:136m";
	// *stringPTR = "to be or not to be";
	// std::cout << "Value of string (changing string pointer) = " << string << std::endl;
	// stringREF = "that is the question";
	// std::cout << "Value of string (changing string reference) = " << string << std::endl;
	// std::cout << RESET;

}