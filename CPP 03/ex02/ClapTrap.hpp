/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:47:25 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/15 15:26:47 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define WHITE "\033[1;37m"
# define RESET "\033[0m"

#include <iostream>
#include <string>

class ClapTrap{
	protected:
		std::string name;
		int hit_points;
		int energy_points;
		int attack_damage;
	public:
		ClapTrap(void); // Default Constructor
		ClapTrap(std::string str); // Parameterized Constructor
		ClapTrap(ClapTrap const &src); // Copy Constructor
		ClapTrap & operator=(ClapTrap const & rhs); // copy assignmnet operator overload
		virtual ~ClapTrap(void); // Destructor
		std::string getName(void);
		int getHitPoints(void);
		int getEnergyPoints(void);
		int getAttackDamage(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif