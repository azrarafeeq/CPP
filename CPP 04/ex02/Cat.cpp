/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:29:17 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 15:38:23 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for Cat class called" << std::endl;
	std::cout << RESET;
	cat_brain = new Brain();
	type = "Cat";
}

Cat::Cat(Cat const &src) : AAnimal(src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Cat class called" << std::endl;
	std::cout << RESET;
	// deep copy of brain
	this->type = src.type;
	this->cat_brain = new Brain();
	
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator for Cat class called" << std::endl;
	if (this != &rhs)
	{
		//deep copy of brain
		this->type = rhs.type;
		this->cat_brain = new Brain();
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Cat class called" << std::endl;
	std::cout << RESET;
	delete cat_brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}