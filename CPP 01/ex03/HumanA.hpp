/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:09:53 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:34:04 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#define GREEN_BOLD "\033[1;38:5:64m"
#define RED_BOLD "\033[1;38:5:88m"
#define RESET "\033[0m"

#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
		Weapon& w;
	public:
		HumanA(std::string nm, Weapon &wpn);
		~HumanA();
	void attack(void);
};


#endif
