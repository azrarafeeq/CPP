/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:11:14 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/28 17:58:29 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for RobotomyRequestForm called" << std::endl;
	std::cout << RESET;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for RobotomyRequestForm called" << std::endl;
	std::cout << RESET;
	target_name = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm("Shrubbery Creation", 145, 137)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for RobotomyRequestForm called" << std::endl;
	std::cout << RESET;
	const_cast <std::string&>(this->name) = src.name; 
	this->sign = src.sign;
	const_cast <int&>(this->grade_sign) = src.grade_sign;
	const_cast <int&>(this->grade_exec) = src.grade_exec;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "Copy assignment operator for RobotomyRequestForm called" << std::endl;
	if (this != &rhs)
	{
		const_cast <std::string&>(this->name) = rhs.name;
		this->sign = rhs.sign;
		const_cast <int&>(this->grade_sign) = rhs.grade_sign;
		const_cast <int&>(this->grade_exec) = rhs.grade_exec;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for RobotomyRequestForm called" << std::endl;
	std::cout << RESET;
}

int RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "          [DRILLING NOISES]" << std::endl;
	// system("say 'rrrrrrrrrrrrrrrrr'");
	// system("afplay -t 15 /System/Library/Sounds/Morse.aiff");
	// system("afplay -t 5 /System/Library/Sounds/Frog.aiff");
	//            -------   DRILLING NOISES ------
	system("afplay -t 5 /System/Library/Sounds/Frog.aiff");
	system("afplay -t 5 /System/Library/Sounds/Frog.aiff");
	system("afplay -t 5 /System/Library/Sounds/Frog.aiff");
	system("afplay -t 5 /System/Library/Sounds/Frog.aiff");
	system("afplay -t 5 /System/Library/Sounds/Frog.aiff");
	system("afplay -t 5 /System/Library/Sounds/Frog.aiff");
	//           ---------------------------------
	try
	{
		if (sign == true && executor.getGrade() <= grade_exec)
		{
			std::cout << GREEN << executor.getName() << " has been robtomized successfully 50% of the time";
			std::cout << RESET << std::endl;
			return (0);
		}
		else if (executor.getGrade() > grade_exec)
				throw AForm::GradeTooLowException();
		else
			throw AForm::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "Exception from Robotomy Request Form thrown: ";
		// std::cout << "Couldn't execute. " << e.what() << "." << std::endl;
		std::cout << "The robotomy of " << executor.getName() << " has failed !!" << RESET << std::endl;
	}
	return (1);
}
