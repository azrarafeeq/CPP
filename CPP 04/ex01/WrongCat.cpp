/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:29:17 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/16 17:39:06 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for WrongCat class called" << std::endl;
	std::cout << RESET;
	wrongcat_brain = new Brain();
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for WrongCat class called" << std::endl;
	std::cout << RESET;
	*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	std::cout << "Copy assignment operator for WrongCat class called" << std::endl;
	if (this != &rhs)
	{
		this->type = rhs.type;
		this->wrongcat_brain = rhs.wrongcat_brain;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for WrongCat class called" << std::endl;
	std::cout << RESET;
	delete wrongcat_brain;
}

// std::string WrongCat::getType(void)
// {
// 	return (type);
// }

void WrongCat::makeSound(void) const
{
	std::cout << "Meow !" << std::endl;
}