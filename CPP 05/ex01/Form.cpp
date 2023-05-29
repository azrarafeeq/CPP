/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:20:18 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/28 18:00:16 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : grade_sign(0), grade_exec(0)
{
	std::cout << GREEN_OLIVE;
	std::cout << "Default Constructor for Form called" << std::endl;
	std::cout << RESET;
}

Form::Form(std::string str, int sign_amt, int exec_amt) : name(str), grade_sign(sign_amt), grade_exec(exec_amt)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Parameterized Constructor for Form called" << std::endl;
	std::cout << RESET;
	sign = false;
	if (name != "")
	{
		try
		{
			// const_cast <int&>(grade_sign) = sign_amt;
			if (sign_amt < 1)
				throw Form::GradeTooHighException();
			else if (sign_amt > 150)
				throw Form::GradeTooLowException();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "Exception from Form thrown: ";
			std::cout << e.what() << " to sign." << RESET << std::endl;
		}
		try
		{
			//const_cast <int&>(grade_exec) = exec_amt;
			if (exec_amt < 1)
				throw Form::GradeTooHighException();
			else if (sign_amt > 150 || exec_amt > 150)
				throw Form::GradeTooLowException();
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

Form::Form(Form const &src) : grade_sign(src.grade_sign), grade_exec(src.grade_exec)
{
	std::cout << GREEN_LIGHT;
	std::cout << "Copy constructor for Form called" << std::endl;
	std::cout << RESET;
	const_cast <std::string&>(this->name) = src.name; 
	this->sign = src.sign;
}

Form & Form::operator=(Form const & rhs)
{
	std::cout << "Copy assignment operator for Form called" << std::endl;
	if (this != &rhs)
	{
		const_cast <std::string&>(this->name) = rhs.name;
		this->sign = rhs.sign;
		const_cast <int&>(this->grade_sign) = rhs.grade_sign;
		const_cast <int&>(this->grade_exec) = rhs.grade_exec;

	}
	return (*this);
}

Form::~Form(void)
{
	std::cout << RED_LIGHT;
	std::cout << "Destructor for Form called" << std::endl;
	std::cout << RESET;
}

std::string Form::getName(void) const
{
	return (name);
}

bool Form::getSign(void) const
{
	return (sign);
}

int Form::getGradeSign(void) const
{
	return (grade_sign);
}

int Form::getGradeExec(void) const
{
	return (grade_exec);
}

std::ostream & operator<<(std::ostream & o, Form const & i)
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

void Form::beSigned(Bureaucrat &B)
{
	if (name != "")
	{
		try
		{
			if (B.getGrade() <= grade_sign && (B.getGrade() >= 1 && B.getGrade() <= 150))
				sign = true;
			else if (B.getGrade() > grade_exec)
				throw Form::GradeTooLowException();
			else
				throw Form::GradeTooHighException();
		}
		catch(const std::exception& e)
		{
			std::cout << RED << "Exception from Form thrown: ";
			std::cout << e.what() << ", cannot sign." << RESET <<  std::endl;
		}
	}
	else
	{
		std::cout << RED << "Error: Form cannot be signed as the form doesn't have a name!";
		std::cout << std::endl << RESET;
	}
}
