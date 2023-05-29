/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:38:07 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/28 17:57:29 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm()
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for PresidentialPardonForm called" << std::endl;
	std::cout << RESET;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for PresidentialPardonForm called" << std::endl;
	std::cout << RESET;
	target_name = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm("Shrubbery Creation", 145, 137)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy Constructor for PresidentialPardonForm called" << std::endl;
	std::cout << RESET;
	const_cast <std::string&>(this->name) = src.name; 
	this->sign = src.sign;
	const_cast <int&>(this->grade_sign) = src.grade_sign;
	const_cast <int&>(this->grade_exec) = src.grade_exec;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "Copy assignment operator for PresidentialPardonForm called" << std::endl;
	if (this != &rhs)
	{
		const_cast <std::string&>(this->name) = rhs.name;
		this->sign = rhs.sign;
		const_cast <int&>(this->grade_sign) = rhs.grade_sign;
		const_cast <int&>(this->grade_exec) = rhs.grade_exec;

	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for PresidentialPardonForm called" << std::endl;
	std::cout << RESET;
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (sign == true && executor.getGrade() <= grade_exec)
		{
			std::cout << GREEN << executor.getName() << " has been pardoned by Zaphod Beeblebrox !!";
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
		std::cout << RED << "Exception from Presidential Pardon Form thrown: ";
		std::cout << "Couldn't execute. " << e.what() << "." << std::endl;
	}
	return (1);
}
