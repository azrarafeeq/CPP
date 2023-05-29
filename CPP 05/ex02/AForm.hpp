/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:20:36 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/27 15:00:04 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	protected:
		const std::string name;
		bool sign;
		const int grade_sign;
		const int grade_exec;
	public:
		AForm(void);
		AForm(std::string str, int sign_amt, int exec_amt);
		AForm(AForm const &src); // copy constructor
		AForm & operator=(AForm const & rhs); // assignment oprator overload
		virtual ~AForm(void);
		
		// exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what () const throw () {return ("Grade too high"); }
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what () const throw () {return ("Grade too low"); }
		};

		// getters
		const std::string getName(void) const;
		bool getSign(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;
		
		//other member functions
		void beSigned(Bureaucrat &B);
		virtual int execute(Bureaucrat const & executor) const = 0;
		
};

std::ostream & operator<<(std::ostream & o, AForm const & i);

# endif