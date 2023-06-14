/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:58:39 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/13 21:41:15 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>

T const& max(T const& a, T const& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template <typename T>

T const& min(T const& a, T const& b)
{
	if (a > b)
		return (b);
	else
		return (a);
}

template <typename T>

void swap(T & a, T & b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

# endif