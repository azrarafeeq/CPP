/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:03:16 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/10 11:27:20 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << RED_LIGHT << "Destructor of base class called" << RESET << std::endl;
}

Base* generate(void)
{
	Base *base_ptr;
	// remainder of rand return value divided by three (0, 1, 2)
	int random = (rand() % 3) + 1;
	// std::cout << "random = " << random << std::endl;
	switch (random)
	{
		case 1:
		// base_ptr = dynamic_cast<A*>(base_ptr);
			base_ptr = new A;
			break ;
		case 2: 
			// base_ptr = dynamic_cast<B*>(base_ptr);
			base_ptr = new B;
			break ;
		case 3:
			// base_ptr = dynamic_cast<C*>(base_ptr);
			base_ptr = new C;
			break ;
	}
	return (base_ptr);
}

void identify(Base* p)
{
	// print the type of the object
	// std::cout << "Identifaication through pointers" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "Object belongs to class " << GREEN << "A" << RESET << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Object belongs to class " << GREEN << "B" << RESET << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Object belongs to class " << GREEN << "C" << RESET << std::endl;
	else
		std::cout << RED << "Object doesn't belong to any of the classes" << std::endl;

}

void identify(Base& p)
{
	try
	{
		Base base;
		base = dynamic_cast<A &>(p);
		std::cout << "Object belongs to class " << GREEN << "A" << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Base base;
		base = dynamic_cast<B &>(p);
		std::cout << "Object belongs to class " << GREEN << "B" << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Base base;
		base = dynamic_cast<C &>(p);
		std::cout << "Object belongs to class " << GREEN << "C" << RESET << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// void identify(Base& p)
// {
// 	try
// 	{
// 		if (dynamic_cast<A &>(p))
// 			std::cout << "Object belongs to class " << GREEN << "A" << RESET << std::endl;
// 		else if (dynamic_cast<B &>(p))
// 			std::cout << "Object belongs to class " << GREEN << "B" << RESET << std::endl;
// 		else if (dynamic_cast<C &>(p))
// 			std::cout << "Object belongs to class " << GREEN << "C" << RESET << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }
