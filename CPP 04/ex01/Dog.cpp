/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:35:05 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 15:20:12 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for Dog class called" << std::endl;
	std::cout << RESET;
	dog_brain = new Brain();
	type = "Dog";
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Dog class called" << std::endl;
	std::cout << RESET;
	//*this = src;
	// deep copy of brain
	this->type = src.type;
	this->dog_brain = new Brain();
	
}

Dog & Dog::operator=(Dog const & rhs)
{
	std::cout << "Copy assignment operator for Dog class called" << std::endl;
	if (this != &rhs)
	{
		if (dog_brain != NULL)
			delete dog_brain;
		// deep copy of brain
		this->type = rhs.type;
		this->dog_brain = new Brain();
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Dog class called" << std::endl;
	std::cout << RESET;
	delete dog_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Bow !" << std::endl;
}