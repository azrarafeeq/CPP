/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:14:01 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/15 15:13:40 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string str);
		ScavTrap(ScavTrap const &src);// Copy Constructor
		ScavTrap & operator=(ScavTrap const & rhs); // copy assignmnet operator overload
		~ScavTrap(void);
		void attack(const std::string& target);
		void guardGate();
};

# endif