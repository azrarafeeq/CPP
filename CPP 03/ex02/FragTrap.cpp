/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:25:44 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 23:09:26 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for FragTrap called" << std::endl;
	std::cout << RESET;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for FragTrap called" << std::endl;
	std::cout << RESET;

	if (str != "")
	{
		name = str;
		hit_points = 100;
		energy_points = 100;
		attack_damage = 30;
	}
	else
	{
		std::cout << RED;
		std::cout << "Name is empty/invalid" << std::endl;
		std::cout << RESET;
	}
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << GREEN_LIGHT << "Copy constructor for FragTrap called" << std::endl << RESET;
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Copy assignment operator for FragTrap called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name; 
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;

	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for FragTrap called" << std::endl;
	std::cout << RESET;
}

void FragTrap::highFiveGuys(void)
{
	if (name != "")
	{
		std::cout << "Great Job on reaching the end ! High Five !" << std::endl;
	}
}