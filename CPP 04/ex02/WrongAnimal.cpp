/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:03:26 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/16 14:44:53 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for WrongAnimal class called" << std::endl;
	std::cout << RESET;
	type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for WrongAnimal class called" << std::endl;
	std::cout << RESET;
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	std::cout << "Copy assignment operator for WrongAnimal class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for WrongAnimal class called" << std::endl;
	std::cout << RESET;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal making sound" << std::endl;
}
