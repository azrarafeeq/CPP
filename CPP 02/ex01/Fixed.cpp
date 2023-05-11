/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:30:36 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/11 18:49:22 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Constructor of class Fixed called" << std::endl;
	std::cout << RESET;
	num = 0;
}

Fixed::Fixed(const int n)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor (int) of class Fixed called" << std::endl;
	std::cout << RESET;
	num = n * int(1 << bits);
}

Fixed::Fixed(const float f)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor (fixed) of class Fixed called" << std::endl;
	std::cout << RESET;
	num = roundf(f * float(1 << bits));
}

Fixed::~Fixed(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor of class Fixed called" << std::endl;
	std::cout << RESET;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->num = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	//o << "The value of the number is: " << i.getRawBits();
	o << "The value of the number is: " << i.toFloat();
	return (o);
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

float Fixed::toFloat(void) const
{
	return (float(num) / float(1 << bits));
}

int Fixed::toInt(void) const
{
	//return (num / (1 << bits));
	return (num >> bits);
}
