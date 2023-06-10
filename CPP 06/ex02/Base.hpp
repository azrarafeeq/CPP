/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:51:02 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/07 17:51:02 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# define GREEN "\033[38:5:2m"
# define RED "\033[38:5:9m"
# define RED_LIGHT "\033[1;38:5:131m"
# define RESET "\033[0m"

#include <iostream>
#include <string>
#include <stdlib.h>

class Base
{
	public:
		virtual ~Base(void);
};

Base* generate(void);
void identify(Base& p);
void identify(Base* p);

#endif