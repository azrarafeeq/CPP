/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:30:36 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/11 18:50:46 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << GREEN_OLIVE;
	// std::cout << "Constructor of class Fixed called" << std::endl;
	// std::cout << RESET;
	num = 0;
}

Fixed::Fixed(const int n)
{
	// std::cout << GREEN_LIGHT;
	// std::cout << "Parameterized Constructor (int) of class Fixed called" << std::endl;
	// std::cout << RESET;
	num = n * int(1 << 8);
}

Fixed::Fixed(const float f)
{
	// std::cout << GREEN_LIGHT;
	// std::cout << "Parameterized Constructor (fixed) of class Fixed called" << std::endl;
	// std::cout << RESET;
	// CONVERT TO FIXED POINT VALUE
	num = f * roundf(float(1 << bits));
}

Fixed::~Fixed(void)
{
	// std::cout << RED_LIGHT;
	// std::cout << "Destructor of class Fixed called" << std::endl;
	// std::cout << RESET;
}

Fixed::Fixed(Fixed const &src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "Assignment operator called" << std::endl;
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
	// std::cout << "getRawBits member function called" << std::endl;
		return (this->num);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}

float Fixed::toFloat(void) const
{
	return (float(num) / float(1 << bits));
}

int Fixed::toInt(void) const
{
	return (num >> bits);
}

// ARIHMETIC OPERATORS

float Fixed::operator+( Fixed const & src) const
{
	//std::cout << "Addition operator called" << std::endl;
	float result = this->toFloat() + src.toFloat();
	return (result);
}

float Fixed::operator-( Fixed const & src) const
{
	//std::cout << "Subtraction operator called" << std::endl;
	float result = this->toFloat() - src.toFloat();
	return (result);
}

float Fixed::operator*( Fixed const & src) const
{
	//std::cout << "Multiplication operator called" << std::endl;
	float result = this->toFloat() * src.toFloat();
	return (result);
}

float Fixed::operator/( Fixed const & src) const
{
	//std::cout << "Division operator called" << std::endl;
	float result = this->toFloat() / src.toFloat();
	return (result);
}

// COMPARISON OPERATORS

bool Fixed::operator>( Fixed const & src) const
{
	//std::cout << "Greater than operator called" << std::endl;
	if (this->num > src.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<( Fixed const & src) const
{
	//std::cout << "Less than operator called" << std::endl;
	if (this->num < src.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator>=( Fixed const & src) const
{
	//std::cout << "Greater than or equal to operator called" << std::endl;
	if (this->num >= src.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator<=( Fixed const & src) const
{
	//std::cout << "Less than or equal to operator called" << std::endl;
	if (this->num <= src.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator==( Fixed const & src) const
{
	//std::cout << "Equal to operator called" << std::endl;
	if (this->num == src.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator!=( Fixed const & src) const
{
	//std::cout << "Not equal to operator called" << std::endl;
	if (this->num != src.getRawBits())
		return (true);
	else
		return (false);
}

// INCREMENT / DECREMENT

Fixed Fixed::operator++()
{
	num++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	++num;
	return(old);
	
}

Fixed Fixed::operator--()
{
	num--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	--num;
	return(old);
}

// MIN AND MAX

Fixed& Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

const Fixed& Fixed::min(Fixed const &num1, Fixed const &num2)
{
	if (num1 < num2)
		return (num1);
	else
		return (num2);
}

Fixed& Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

const Fixed& Fixed::max(Fixed const &num1, Fixed const &num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}

