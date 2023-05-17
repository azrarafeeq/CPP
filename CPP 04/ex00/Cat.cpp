/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:29:17 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 15:30:09 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for Cat class called" << std::endl;
	std::cout << RESET;
	type = "Cat";
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Cat class called" << std::endl;
	std::cout << RESET;
	*this = src;
	// this->type = src.type;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignment operator for Cat class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Cat class called" << std::endl;
	std::cout << RESET;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}