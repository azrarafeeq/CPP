/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:15:44 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/29 15:20:32 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	//constructor message
	type = t;
}

Weapon::~Weapon()
{
	//destructor message
}

std::string Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string str)
{
	type = str;
}