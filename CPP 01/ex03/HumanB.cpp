/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:50:02 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/30 21:58:15 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nm)
{
	// std::cout << GREEN_BOLD;
	// std::cout << "Constructor called!" << std::endl;
	// std::cout << RESET;
	name = nm;
}

HumanB::~HumanB()
{
	// std::cout << RED_BOLD;
	// std::cout << "Destructor called!" << std::endl;
	// std::cout << RESET;
}

void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& wpn)
{
	w = &wpn;
}