/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:46:53 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/30 21:57:16 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#define GREEN_BOLD "\033[1;38:5:64m"
#define RED_BOLD "\033[1;38:5:88m"
#define RESET "\033[0m"

#include "Weapon.hpp"

class HumanB{
	private:
		std::string name;
		Weapon* w;
	public:
		HumanB(std::string nm);
		~HumanB();
		void setWeapon(Weapon& wpn);
		void attack(void);
};

#endif