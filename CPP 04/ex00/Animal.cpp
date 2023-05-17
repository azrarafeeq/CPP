/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:03:26 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 14:03:32 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for Animal class called" << std::endl;
	std::cout << RESET;
	type = "animal";
}

Animal::Animal(Animal const &src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Animal class called" << std::endl;
	std::cout << RESET;
	*this = src;
}

Animal & Animal::operator=(Animal const & rhs)
{
	std::cout << "Copy assignment operator for Animal class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Animal class called" << std::endl;
	std::cout << RESET;
}

std::string Animal::getType(void) const
{
	return (type);
}

void Animal::makeSound(void) const
{
	std::cout << "just an animal making sound" << std::endl;
}
