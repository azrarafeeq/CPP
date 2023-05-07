/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 12:01:53 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:45:11 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << GREEN_BOLD;
	std::cout << "Default Constructor called" << std::endl;
	std::cout << RESET;
}

Zombie::~Zombie()
{
	std::cout << RED_BOLD;
	std::cout << "Destructor for zombie " << name << " called" << std::endl;
	std::cout << RESET;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void)
{
	return (name);
}

void Zombie::setName(std::string str)
{
	name = str;
}