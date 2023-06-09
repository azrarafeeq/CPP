/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:50:20 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/07 17:50:20 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Constructor of class Serializer called" << std::endl;
	std::cout << RESET;
}

Serializer::Serializer(Serializer const &src)
{
	std::cout << "Copy constructor of class Serializer called" << std::endl;
	*this = src;
}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	(void)rhs;
	std::cout << "Assignment operator of class Serializer called" << std::endl;
	return (*this);
}

Serializer::~Serializer(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor of class Serializer called" << std::endl;
	std::cout << RESET;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}