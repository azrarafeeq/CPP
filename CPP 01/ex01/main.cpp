/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:58:15 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/30 21:47:09 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	//int i;
	int N;
	Zombie* Chuck;
	
	//i = 0;
	N = 4;
	Chuck  = zombieHorde(N, "p");
/* 	while (i < N)
	{
		std::cout << "Name of zombie " << i << " is " << Chuck[i].getName() << std::endl;
		i++;
	} */
	delete [] Chuck;
}