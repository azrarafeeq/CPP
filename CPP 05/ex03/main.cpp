/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:38:04 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/28 18:01:23 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat _B("Sajitha", 2);
	Intern someRandomIntern;
	AForm* form;
	form = someRandomIntern.makeForm("presidential pardon", _B.getName());
	if (_B.getName() != "" && form != NULL)
	{
		_B.signForm(*form);
		_B.executeForm(*form);
		//std::cout << _B;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << MUSTARD << *form << RESET;
		std::cout << "----------------------------------------" << std::endl;
		delete form;
	}

	return (0);
}