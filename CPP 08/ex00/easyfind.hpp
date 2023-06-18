/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:56:08 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/15 17:24:19 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

class OccurranceNotFound : public std::exception
{
	public:
		virtual const char * what () const throw () {
			return ("\033[0;31mError: Occurance Not Found! \033[0m\n");
		}
};

template < typename T >

typename T::iterator easyfind(T &arg, int num)
{
	typename T::iterator it = std::find(arg.begin(), arg.end(), num);
	if(it == arg.end())
		throw OccurranceNotFound();
		// throw std::runtime_error("not found");
	return it;
}

// can specialize for stack

# endif