/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:09:27 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/14 15:16:34 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void print_info(ClapTrap &clap, ClapTrap &clap2)
{
	if (clap.getName() != "" && clap2.getName() != "")
	{
		std::cout << MUSTARD;
		std::cout << "--------------------------------" << std::endl;
		std::cout << "             INFO               " << std::endl ;
		std::cout << clap.getName() << "'s hit points = " << clap.getHitPoints() << std::endl;
		std::cout << clap.getName() << "'s energy points = " << clap.getEnergyPoints() << std::endl;
		std::cout << clap2.getName() << "'s hit points = " << clap2.getHitPoints() << std::endl;
		std::cout << clap2.getName() << "'s energy points = " << clap2.getEnergyPoints() << std::endl;
		std::cout << "--------------------------------" << std::endl;
		std::cout << RESET;
	}
}

int main(void)
{
	ClapTrap clap1("Dumbledore");
	ClapTrap clap2("Voldemort");

	print_info(clap1, clap2);
	
	// ATTACKED

	clap1.attack(clap2.getName());
	clap2.takeDamage(5);
	print_info(clap1, clap2);
	
	// REPAIRED
	
	clap2.beRepaired(4);
	print_info(clap1, clap2);
	std::cout << RESET;
	
	// CAN'T FUNCTION IF NO HIT POINTS OR ENERGY POINTS

	clap1.attack(clap2.getName());
	clap2.takeDamage(11);
	print_info(clap1, clap2);
	
	// clap1.attack(clap2.getName());
	// clap2.takeDamage(11);
	// clap2.beRepaired(4);
	
}