/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:05:35 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/14 11:04:15 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <string>

template< typename T >

class Array{
	private:
		T				*array;
		unsigned int	s;
		
	public:
		Array(void) // default constructor
		{
			s = 0;
			this->array = new T[s];
			// this->array = NULL;
		}
		Array(unsigned int n) // parameterized cnstructor
		{
			s = n;
			this->array = new T[s];
		}
		Array(Array & src) // copy constructor
		{
			unsigned int i = 0;
			// deep copy
			this->s = src.s;
			if (src.array != NULL)
			{
				this->array = new T[s];
				while (i < this->s)
				{
					this->array[i] = src.array[i];
					i++;
				}
			}
			else
				this->array = NULL;
		}
		Array & operator=(Array const & rhs) // assignment operator
		{
			// deep copy
			unsigned int i = 0;
			this->s = rhs.s;
			if (rhs->array != NULL)
			{
				this->array = new T[s];
				while (i < this->s)
				{
					this->array[i] = rhs.array[i];
					i++;
				}
			}
			else
				this->array = NULL;
			return (*this);
		}
		~Array(void)
		{
			// de-allocate memory
			if (array != NULL)
				delete [] array;
		}
		class MemoryAccessOutOfBounds : public std::exception
		{
			public:
				virtual const char * what () const throw () {
					return ("\033[0;31mError: Memory not accessible \033[0m");
				}
		};
		T& operator[](unsigned int i) const
		{
			if ( i >= this->s )
				throw Array::MemoryAccessOutOfBounds();
			return this->array[i];

		}
	// member function(s)
		int size(void)
		{
			return this->s;
		}
};

// better to create overload function for insertion operator but not necessary

# endif