/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:30:33 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/11 18:49:56 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define RED_LIGHT "\033[1;38:5:131m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define RESET "\033[0m"

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int num;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed(void);
		Fixed(Fixed const &src); //copy constructor
		Fixed & operator=(Fixed const & src); //copy assignment operator overload
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif