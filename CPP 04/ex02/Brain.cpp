/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 21:17:09 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 15:26:21 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default constructor for Brain class called" << std::endl;
	std::cout << RESET;
}

Brain::Brain(Brain const &src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Brain class called" << std::endl;
	std::cout << RESET;
	int i = 0;
	while(i++ < 100)
			ideas[i] = src.ideas[i];
}

Brain & Brain::operator=(Brain const & rhs)
{
	std::cout << "Copy assignment operator for Brain class called" << std::endl;
	int i = 0;
	if (this != &rhs)
	{
		while(i++ < 100)
			ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Brain class called" << std::endl;
	std::cout << RESET;
}