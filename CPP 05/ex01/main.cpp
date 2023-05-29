/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:46:12 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/27 14:35:26 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat _B("Shareefa", 42);
	Form _F("Shrubbery", 120, 75);
	
	std::cout << _B;
	// std::cout << "----------------------------------------" << std::endl;
	// std::cout << MUSTARD << _F << RESET;
	// std::cout << "----------------------------------------" << std::endl;
	_B.signForm(_F);
	// std::cout << "----------------------------------------" << std::endl;
	// std::cout << MUSTARD << _F << RESET;
	// std::cout << "----------------------------------------" << std::endl;
}