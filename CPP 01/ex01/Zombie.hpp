/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 11:58:45 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:42:24 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#define RED_ERROR "\033[38:5:9m"
#define GREEN_BOLD "\033[1;38:5:64m"
#define RED_BOLD "\033[1;38:5:88m"
#define RESET "\033[0m"

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
	std::string getName(void);
	void setName(std::string str);
	void announce(void);
};

Zombie* zombieHorde(int N, std::string str);

#endif