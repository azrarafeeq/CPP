/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 14:21:10 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/30 21:46:05 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << RED_ERROR;
		std::cout << "Invalid amount of Zombies" << std::endl;
		std::cout << RESET;
		exit(0);
	}
	Zombie* Teresa = new Zombie[N];
	int i;
	i = 0;
	while (i < N)
	{
		Teresa[i].setName(name);
		Teresa[i].announce();
		i++;
	}
	return (Teresa);
}