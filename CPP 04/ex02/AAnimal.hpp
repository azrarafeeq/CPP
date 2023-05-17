/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:03:49 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 12:53:02 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <string>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal(void);
		AAnimal(AAnimal const &src); // copy constructor
		AAnimal & operator=(AAnimal const & rhs); // copy assignmnt operator overload
		virtual ~AAnimal(void);

		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};

#endif