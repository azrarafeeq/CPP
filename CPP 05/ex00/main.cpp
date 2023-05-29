/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:46:12 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/27 13:44:30 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat B_1("Azra", 150);
	
	std::cout << B_1;
	
	B_1.decrement_grade();
	//std::cout << "Bureacrat " << B_1.getName() << "'s grade after decrementing: " << B_1.getGrade() << std::endl;
	B_1.increment_grade();
	// std::cout << "Bureacrat " << B_1.getName() << "'s grade after incrementing: " << B_1.getGrade() << std::endl;
}