/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:49:26 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/16 18:20:25 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <stack>
#include <list>
#include <string>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
	// "typedef" is defining a new type for use in your code, like a shorthand.

	// "typename" here is letting the compiler know that the container_type/iterator
	//  is a type and not a static member of main_stack/container
	// the "typename" is saying that main_stack::container_type/container::iterator is the 
	// name of type so the typedef can reley on that fact.

	// the "::" is the scope of the type
		typedef std::stack<T> main_stack;
		typedef typename main_stack::container_type container; // to access th econtainer_type from stack
		typedef typename container::iterator iterator; // accessing iterator pointer from container

	// orthodox canonical form
	MutantStack(void)
	{
		std::cout << GREEN_OLIVE << "Default constructor for MutantStack called";
		std::cout << RESET << std::endl;
		main_stack();
	}
	
	MutantStack(MutantStack<T> const & src) : main_stack(src)
	{
		std::cout << GREEN_LIGHT << "Copy constructor for MutantStack called";
		std::cout << RESET << std::endl;
		
	}
	
	main_stack & operator=(main_stack const & rhs)
	{
		if (*this != rhs)
			*this = rhs;
		return (*this);
	}

	~MutantStack(void)
	{
		std::cout << RED_LIGHT << "Destructor for MutantStack called";
		std::cout << RESET << std::endl;
	}
	
	//member functions
	// begin and end return an iterator
	iterator begin(void)
	{
		// return this->begin();// it is recursive, is there begin in stack;
		// return this->top(); // can't use top because the return value is the value itself and not an iterator
		// return this->cbegin(); // doesnt work
		return this->c.begin();
	}
	iterator end(void)
	{
		// iterate and find the last??
		// return this->end(); // recursive
		// return this->cend(); // doesn't work
		return this->c.end();
	}
};

#endif