/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:07:16 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/28 17:36:53 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for Bureaucrat called" << std::endl;
	std::cout << RESET;
}

Bureaucrat::Bureaucrat(std::string str, int amt) : name(str)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for Bureaucrat called" << std::endl;
	std::cout << RESET;
	grade = amt;
	if (name != "")
	{
		try
		{
			if (amt < 1)
				throw Bureaucrat::GradeTooHighException();
			else if (amt > 150)
				throw Bureaucrat::GradeTooLowException();
		}
		catch(const std::exception & e)
		{
			std::cout << RED << "Exception Thrown: ";
			std::cout << e.what() << RESET <<  std::endl;
		}
	}
	else
	{
		std::cout << RED << "Error: Bureacrat must have a name";
		std::cout << std::endl << RESET;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	std::cout << RESET;
	const_cast <std::string&>(this->name) = src.name; 
	this->grade = src.grade;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Copy assignment operator for Bureaucrat called" << std::endl;
	if (this != &rhs)
	{
		const_cast <std::string&>(this->name) = rhs.name; 
		this->grade = rhs.grade;

	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Bureaucrat called" << std::endl;
	std::cout << RESET;
}

const std::string Bureaucrat::getName(void) const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

void Bureaucrat::increment_grade(void)
{
	if (name != "")
	{
		try
		{
			grade -= 1;
			if (grade - 1 < 1)
				throw Bureaucrat::GradeTooHighException();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "Exception Thrown: ";
			std::cout << e.what() << RESET <<  std::endl;
		}
	}
	else
	{
		std::cout << RED << "Error: Cannot increment the grade of an invisible Bureacrat";
		std::cout << std::endl << RESET;
	}
}

void Bureaucrat::decrement_grade(void)
{
	if (name != "")
	{
		try
		{
			grade += 1;
			if (grade > 150)
				throw Bureaucrat::GradeTooLowException();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "Exception from Bureaucrat thrown: ";
			std::cout << e.what() << RESET <<  std::endl;
		}
	}
	else
	{
		std::cout << RED << "Error: Cannot decrement the grade of an invisible Bureacrat";
		std::cout << std::endl << RESET;
	}
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i)
{
	if (i.getName() != "")
		o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	else
		o << RED << "Error: Bureacrat must have a name" << RESET << std::endl;
	return (o);
}

void Bureaucrat::signForm(AForm& _form)
{
	if (name != "" && _form.getName() != "")
	{
		_form.beSigned(*this);
		if (_form.getSign() == true)
			std::cout << name << " signed " << _form.getName() << " form" << std::endl;
		else
			std::cout << RED << name << " couldn't sign form because the grade was invlaid or too low !!" << RESET << std::endl;
	}
	else
	{
		if (name == "")
			std::cout << RED << "An invisible bureaucrat cannot sign the form" << RESET << std::endl;
		else
			std::cout << RED << "Bureacrat can't sign as form has no name" << RESET << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & _form)
{
	if (name != "" && _form.getName() != "")
	{
		if (_form.execute(*this))
			std::cout << RED << "Error: Couldn't execute form." << RESET << std::endl;
		else
			std::cout << name << " executed " << _form.getName() << " form." << std::endl;
	}
	else
	{
		if (name == "")
			std::cout << RED << "An invisible bureaucrat cannot execute the form" << RESET << std::endl;
		else
			std::cout << RED << "Bureacrat can't execute as form has no name" << RESET << std::endl;
		
	}
}
