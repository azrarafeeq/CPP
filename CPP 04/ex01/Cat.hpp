/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 17:09:25 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 16:11:41 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* cat_brain;
	public:
		Cat(void);
		Cat(Cat const &src); // copy constructors
		Cat & operator=(Cat const & rhs); // copy assignnet operator overload
		virtual ~Cat(void);

		virtual void makeSound(void) const;
};

#endif