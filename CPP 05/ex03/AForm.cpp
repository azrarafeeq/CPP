/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:20:18 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/21 13:29:18 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) :  grade_sign(0), grade_exec(0)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for AForm called" << std::endl;
	std::cout << RESET;
}

AForm::AForm(std::string str, int sign_amt, int exec_amt) : name(str), grade_sign(sign_amt), grade_exec(exec_amt)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for AForm called" << std::endl;
	std::cout << RESET;
	sign = false;
	if (name != "")
	{
		try
		{
			if (sign_amt < 1)
				throw AForm::GradeTooHighException();
			else if (sign_amt > 150)
				throw AForm::GradeTooLowException();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "Exception from Form thrown: ";
			std::cout << e.what() << " to sign." << RESET <<  std::endl;
		}
		try
		{
			if (exec_amt < 1)
				throw AForm::GradeTooHighException();
			else if (sign_amt > 150 || exec_amt > 150)
				throw AForm::GradeTooLowException();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "Exception from Form thrown: ";
			std::cout << e.what() << " to execute." << RESET <<  std::endl;
		}
	}
	else
	{
		std::cout << RED << "Error: Name not provided for the form.";
		std::cout << std::endl << RESET;
	}
}

AForm::AForm(AForm const &src) : grade_sign(src.grade_sign), grade_exec(src.grade_exec)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for AForm called" << std::endl;
	std::cout << RESET;
	const_cast <std::string&>(this->name) = src.name; 
	this->sign = src.sign;
}

AForm & AForm::operator=(AForm const & rhs)
{
	std::cout << "Copy assignment operator for AForm called" << std::endl;
	if (this != &rhs)
	{
		const_cast <std::string&>(this->name) = rhs.name;
		this->sign = rhs.sign;
		const_cast <int&>(this->grade_sign) = rhs.grade_sign;
		const_cast <int&>(this->grade_exec) = rhs.grade_exec;
	}
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for AForm called" << std::endl;
	std::cout << RESET;
}

const std::string AForm::getName(void) const
{
	return (name);
}

bool AForm::getSign(void) const
{
	return (sign);
}

int AForm::getGradeSign(void) const
{
	return (grade_sign);
}

int AForm::getGradeExec(void) const
{
	return (grade_exec);
}

std::ostream & operator<<(std::ostream & o, AForm const & i)
{
	if (i.getName() != "")
	{
		o << "            - Form details - " << std::endl << std::endl; 
		o << "Name                     : " << i.getName() << std::endl;
		o << "Sign state               : ";
		if (i.getSign() == 0)
			std::cout << "Not Signed" << std::endl;
		else
			std::cout << "Signed" << std::endl;
		o << "Grade required to sign   : " << i.getGradeSign() << std::endl;
		o << "Grade required to execute: " << i.getGradeExec() << std::endl;
	}
	else
	{
		o << RED << "Error: Can't print details. Name not provided for the form.";
		o << std::endl << RESET;
	}
	return (o);
}

void AForm::beSigned(Bureaucrat &B)
{
	if (name != "")
	{
		try
		{
			if (B.getGrade() <= grade_sign && (B.getGrade() >= 1 && B.getGrade() <= 150))
				sign = true;
			else if (B.getGrade() > grade_exec)
				throw AForm::GradeTooLowException();
			else
				throw AForm::GradeTooHighException();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "Exception from Form thrown: ";
			std::cout << e.what() << ", cannot sign." << RESET << std::endl;
		}
	}
	else
	{
		std::cout << RED << "Error: Form cannot be signed as the form doesn't have a name!";
		std::cout << std::endl << RESET;
	}
}
