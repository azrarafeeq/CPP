/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:04:57 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/28 14:30:18 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for Intern called" << std::endl;
	std::cout << RESET;
}

Intern::~Intern(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Intern called" << std::endl;
	std::cout << RESET;
}

AForm* Intern::shrubbery(std::string target_name)
{
	return (new ShrubberyCreationForm(target_name));
}

AForm* Intern::robotomy(std::string target_name)
{
	return (new RobotomyRequestForm(target_name));
}

AForm* Intern::presidential(std::string target_name)
{
	return (new PresidentialPardonForm(target_name));
}

AForm* Intern::makeForm(std::string form_name, std::string target_name)
{
	if (target_name != "")
	{
		std::string f_name[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
		Intern::Intern_pointer ptr[] = {&Intern::shrubbery, &Intern::robotomy, &Intern::presidential};
		int i = 0;
		while (i < 3)
		{
			if (f_name[i] == form_name)
			{
				std::cout << "Intern creates " << form_name << " form." << std::endl;
				return ((this->*ptr[i]) (target_name));
			}
			i++;
		}
		std::cout << RED << "Intern couldn't create form. Form doesn't exist" << RESET << std::endl;
	}
	else
		std::cout << RED << "Error: Bureaucrat name not provided" << RESET << std::endl;
	return (NULL);
}

// MAKING FORM USING SWITCH STATEMENT
// while (i < 3)
// {
// 	if (f_name[i] == form_name)
// 	{
// 		std::cout << "Intern creates " << form_name << " form." << std::endl;
// 		switch (i)
// 		{
// 		case SHRUBBERY:
// 			return (new ShrubberyCreationForm(target_name));
// 		case ROBOTOTMY:
// 			return (new RobotomyRequestForm(target_name));
// 		case PRESIDENTIAL:
// 			return (new PresidentialPardonForm(target_name));
// 		}
// 	}
// 	i++;
// }