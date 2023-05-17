/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:09:27 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/14 16:55:58 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void print_info(FragTrap &frag)
{
	if (frag.getName() != "")
	{
		std::cout << MUSTARD;
		std::cout << "--------------------------------" << std::endl;
		std::cout << "             INFO               " << std::endl ;
		std::cout << frag.getName() << "'s hit points = " << frag.getHitPoints() << std::endl;
		std::cout << frag.getName() << "'s energy points = " << frag.getEnergyPoints() << std::endl;
		std::cout << "--------------------------------" << std::endl;
		std::cout << RESET;
	}
}

int main(void)
{
	FragTrap frag1("Luna");
	print_info(frag1);

	frag1.takeDamage(50);
	print_info(frag1);
	
	frag1.beRepaired(20);
	print_info(frag1);

	std::cout << WHITE;
	frag1.highFiveGuys();
	std::cout << RESET;
}