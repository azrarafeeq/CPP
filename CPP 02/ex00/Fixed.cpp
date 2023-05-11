/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:30:36 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/09 17:41:37 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << GREEN_OLIVE << "Default constructor called" << std::endl << RESET;
	num = 0;
}

Fixed::~Fixed(void)
{
	std::cout << RED_LIGHT << "Destructor called" << std::endl << RESET;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << GREEN_LIGHT << "Copy constructor called" << std::endl << RESET;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->num = src.getRawBits(); 
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
		return (this->num);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}
