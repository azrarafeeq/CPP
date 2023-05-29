/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:05:35 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/28 13:32:16 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

enum form_enum{
	SHRUBBERY,
	ROBOTOTMY,
	PRESIDENTIAL
};

class Intern{
	private:
		AForm *shrubbery(std::string target_name);
		AForm *robotomy(std::string target_name);
		AForm *presidential(std::string target_name);
	public:
		Intern(void);
		Intern(Intern const &src); // copy constructor
		Intern & operator=(Intern const & rhs); //assignment operator overload
		~Intern(void);
		
		// member functions
		AForm* makeForm(std::string form_name, std::string target_name);
typedef AForm* (Intern::*Intern_pointer) (std::string);
};

#endif