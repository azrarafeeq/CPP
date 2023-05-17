/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:03:49 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 13:56:54 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(Animal const &src); // copy constructor
		Animal & operator=(Animal const & rhs); // copy assignmnt operator overload
		virtual ~Animal(void);

		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif