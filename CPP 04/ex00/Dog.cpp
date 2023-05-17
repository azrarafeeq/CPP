/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:35:05 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 15:33:01 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for Dog class called" << std::endl;
	std::cout << RESET;
	type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Dog class called" << std::endl;
	std::cout << RESET;
	*this = src;
	// this->type = src.type;
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator for Dog class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Dog class called" << std::endl;
	std::cout << RESET;
}

void Dog::makeSound(void) const
{
	std::cout << "Bow !" << std::endl;
}