/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:58:15 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:45:43 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* Newt;
	
	Newt = newZombie("Newt");
	//Newt->announce();
	randomChump("Minho");
	delete Newt;
}