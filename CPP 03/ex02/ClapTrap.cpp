/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:53:33 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/14 15:31:33 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for ClapTrap called" << std::endl;
	std::cout << RESET ;
}

ClapTrap::ClapTrap(std::string str)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for ClapTrap called" << std::endl;
	std::cout << RESET ;
	name = str;
	if (name != "")
	{
		hit_points = 10;
		energy_points = 10;
		attack_damage = 0;
	}
	else
	{
		std::cout << RED;
		std::cout << "Name is empty/invalid" << std::endl;
		std::cout << RESET;
	}
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << GREEN_LIGHT << "Copy constructor for ClapTrap called" << std::endl << RESET;
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator for ClapTrap called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name; 
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;

	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for ClapTrap called" << std::endl;
	std::cout << RESET;
}

std::string ClapTrap::getName(void)
{
	return (name);
}

int ClapTrap::getHitPoints(void)
{
	return (hit_points);
}

int ClapTrap::getEnergyPoints(void)
{
	return (energy_points);
}

int ClapTrap::getAttackDamage(void)
{
	return (attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
	if (name != "")
	{
		if (this->energy_points <= 0 || this->hit_points <= 0)
		{
			std::cout << RED;
			std::cout << "No energy points or hit points left for " << name << " !!"<< std::endl;
			std::cout << RESET;
			return ;
		}
		std::cout << "ClapTrap " << name << " attacks " << target;
		std::cout << ", causing " << attack_damage << " points of damage !";
		std::cout << std::endl;
		this->energy_points -= 1;
		if (this->energy_points <= 0 || this->hit_points <= 0)
		{
			std::cout << RED;
			std::cout << "No energy points or hit points left for " << name << " !!"<< std::endl;
			std::cout << RESET;
			return ;
		}
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (name != "")
	{
		if (this->hit_points <= 0 || this->energy_points <= 0)
		{
			std::cout << RED;
			std::cout << "No energy points or hit points left for " << name << " !!"<< std::endl;
			std::cout << RESET;
			return ;
		}
		std::cout << name << " was attacked, which caused a damage of " << amount << " amount !";
		std::cout << std::endl;
		// this->hit_points -= attack_damage;
		this->hit_points -= amount;
		if (this->energy_points <= 0 || this->hit_points <= 0)
		{
			std::cout << RED;
			std::cout << "No energy points or hit points left for " << name << " !!"<< std::endl;
			std::cout << RESET;
			return ;
		}
	}
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (name != "")
	{
		if (this->energy_points <= 0 || this->hit_points <= 0)
		{
			std::cout << RED;
			std::cout << "No energy points or hit points left for " << name << " !!"<< std::endl;
			std::cout << RESET;
			return ;
		}
		std::cout << name << " got repaired with an amount of " << amount << " !";
		std::cout << std::endl;
		this->energy_points -= 1;
		this->hit_points += amount;
		if (this->energy_points <= 0 || this->hit_points <= 0)
		{
			std::cout << RED;
			std::cout << "No energy points or hit points left for " << name << " !!"<< std::endl;
			std::cout << RESET;
			return ;
		}
	}
}