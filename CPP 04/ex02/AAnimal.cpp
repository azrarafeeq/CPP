/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:03:26 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 12:53:58 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for Animal class called" << std::endl;
	std::cout << RESET;
	type = "";
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Animal class called" << std::endl;
	std::cout << RESET;
	*this = src;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	std::cout << "Copy assignment operator for Animal class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Animal class called" << std::endl;
	std::cout << RESET;
}

std::string AAnimal::getType(void) const
{
	return (type);
}

void AAnimal::makeSound(void) const
{
	std::cout << "just an animal making sound" << std::endl;
}
