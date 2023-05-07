/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 17:17:21 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:30:49 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#define INDIAN_RED "\033[1;38:5:131m"
#define GREEN_BOLD "\033[1;38:5:64m"
#define RED_BOLD "\033[1;38:5:88m"
#define RESET "\033[0m"

#include <iostream>
#include <string>

class Harl{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl();
		~Harl();
		void complain(std::string level);
typedef void (Harl::*Harl_pointer)(void);
};

#endif