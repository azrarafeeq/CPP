/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:03:16 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/09 20:09:36 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "Destructor of base class called" << std::endl;
}

Base* generate(void)
{
	Base *base_ptr = new Base;
	// remainder of rand return value divided by three (0, 1, 2)
	int random = (rand() % 3) + 1;
	// int random = 1;
	std::cout << "random = " << random << std::endl;
	switch (random)
	{
		case 1:
			base_ptr = dynamic_cast<A*>(base_ptr);
			break ;
		case 2: 
			base_ptr = dynamic_cast<B*>(base_ptr);
			break ;
		case 3:
			base_ptr = dynamic_cast<C*>(base_ptr);
			break ;
	}
	return (base_ptr);
}

void identify(Base* p)
{
	// print the type of the object
	std::cout << "Identifaication through pointers" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "Object belongs to class" << GREEN << "A" << RESET << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object belongs to class" << GREEN << "B" << RESET << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object belongs to class" << GREEN << "C" << RESET << std::endl;
	else
		std::cout << RED << "Object doesn't belong to any of the classes" << std::endl;

}

void identify(Base& p)
{
	try
	{
		if (dynamic_cast<A*>(&p))
			std::cout << "Object belongs to class" << GREEN << "A" << RESET << std::endl;
		else if (dynamic_cast<B*>(&p))
			std::cout << "Object belongs to class" << GREEN << "B" << RESET << std::endl;
		else if (dynamic_cast<C*>(&p))
			std::cout << "Object belongs to class" << GREEN << "C" << RESET << std::endl;
		// else
		// 	throw std::exception;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	 // same as the function above but cant use pointers
}
