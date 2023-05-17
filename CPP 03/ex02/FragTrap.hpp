/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:26:13 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/14 15:52:51 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string str);
		FragTrap(FragTrap const &src); // Copy Constructor
		FragTrap & operator=(FragTrap const & rhs); // copy assignmnet operator overload
		~FragTrap(void);
		void highFiveGuys(void);
};

#endif