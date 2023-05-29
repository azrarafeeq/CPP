/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:02:37 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/27 14:37:02 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include "Form.hpp"

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string str, int amt);
		Bureaucrat(Bureaucrat const &src); // copy constructor
		Bureaucrat & operator=(Bureaucrat const & rhs); // assignment operator overload
		~Bureaucrat(void);
		
		// getters
		const std::string getName(void) const;
		int getGrade(void) const;
		
		// exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what () const throw () {return ("Grade too high!!"); }
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what () const throw () {return ("Grade too low!!"); }
		};
		
		// ++ / --
		void increment_grade(void);
		void decrement_grade(void);
		
		// other functions
		void signForm(Form& _form);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif
