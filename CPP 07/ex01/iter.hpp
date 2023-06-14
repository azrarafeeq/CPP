/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:03:02 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/11 11:58:31 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>

void iter(T *address, int length, void (*function) (T & arr_elem))
{
	// apply function to each element
	int i = 0;

	while (i < length)
	{
		function(address[i]);
		i++;
	}
}

# endif