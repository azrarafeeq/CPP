/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:58:03 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 23:08:44 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for ScavTrap called" << std::endl;
	std::cout << RESET;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for ScavTrap called" << std::endl;
	std::cout << RESET;
	name = str;
	if (name != "")
	{
		hit_points = 100;
		energy_points = 50;
		attack_damage = 20;
	}
	else
	{
		std::cout << RED;
		std::cout << "Name is empty/invalid" << std::endl;
		std::cout << RESET;
	}
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << GREEN_LIGHT << "Copy constructor for ScavTrap called" << std::endl << RESET;
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "Copy assignment operator for ScavTrap called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name; 
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;

	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for ScavTrap called" << std::endl;
	std::cout << RESET;
}

void ScavTrap::attack(const std::string& target)
{
	if (name != "")
	{
		std::cout << "ScavTrap " << name << " attacks " << target;
		//std::cout << ", causing " << attack_damage << " points of damage !";
		std::cout << std::endl;
		this->energy_points -= 1;
	}
}

void ScavTrap::guardGate()
{
	if (name != "")
	{
		std::cout << "ScavTrap " << name << " is now in Gate keeper mode !" << std::endl;
	}
}