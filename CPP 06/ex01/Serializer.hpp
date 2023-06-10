/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:50:25 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/07 17:50:25 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define RESET "\033[0m"

#include <iostream>
#include <stdint.h>

#include "Data.hpp"

class Serializer{
	public:
		Serializer(void);
		Serializer(Serializer const &src); // copy constructor
		Serializer & operator=(Serializer const & rhs); // copy assisgnment operator overload
		~Serializer(void);

	// member functions
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif