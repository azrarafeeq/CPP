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

#include "ScavTrap.hpp"

void print_info(ScavTrap &scav)
{
	if (scav.getName() != "")
	{
		std::cout << MUSTARD;
		std::cout << "--------------------------------" << std::endl;
		std::cout << "             INFO               " << std::endl ;
		std::cout << scav.getName() << "'s hit points = " << scav.getHitPoints() << std::endl;
		std::cout << scav.getName() << "'s energy points = " << scav.getEnergyPoints() << std::endl;
		std::cout << "--------------------------------" << std::endl;
		std::cout << RESET;
	}
}

int main(void)
{
	ScavTrap scav1("Hermione");
	
	print_info(scav1);
	
	scav1.attack("Bellatrix");
	scav1.takeDamage(50);
	print_info(scav1);
	
	scav1.beRepaired(20);
	print_info(scav1);

	scav1.guardGate();
}