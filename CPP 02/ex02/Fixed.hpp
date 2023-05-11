/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:30:33 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/11 18:25:57 by arafeeq          ###   ########.fr       */
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
		Fixed (void);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed(void);
		Fixed(Fixed const &src);
		Fixed & operator=(Fixed const & src);
	
		// COMPARISON OPERATORS
		bool operator>( Fixed const & src) const;
		bool operator<( Fixed const & src) const;
		bool operator>=( Fixed const &src) const;
		bool operator<=( Fixed const &src) const;
		bool operator==( Fixed const &src) const;
		bool operator!=( Fixed const &src) const;

		// ARITHMETIC OPERATORS
		float operator+( Fixed const &src) const;
		float operator-( Fixed const &src) const;
		float operator*( Fixed const &src) const;
		float operator/( Fixed const &src) const;
		
		// INCREMENT / DECREMENT
		// pre increment
		Fixed operator++();
		// post increment
		Fixed operator++(int);
		// pre decrement
		Fixed operator--();
		// post decrement
		Fixed operator--(int);
		
		// MIN AND MAX OVERLOAD MEMBER FUNCTIONS
		static Fixed& min(Fixed &num1, Fixed &num2);
		static const Fixed& min(Fixed const &num1, Fixed const &num2);
		
		static Fixed& max(Fixed &num1, Fixed &num2);
		static const Fixed& max(Fixed const &num1, Fixed const &num2);
		
		// MEMBER FUNCTIONS
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif