/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:09:30 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:39:34 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nm, Weapon &wpn) : w(wpn)
{
	this->name = nm;
}

HumanA::~HumanA()
{
	// std::cout << RED_BOLD;
	// std::cout << "Destructor called!" << std::endl;
	// std::cout << RESET;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
}