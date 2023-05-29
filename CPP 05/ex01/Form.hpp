/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 00:20:36 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/27 13:57:51 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		const std::string name;
		bool sign;
		const int grade_sign;
		const int grade_exec;
	public:
		Form(void);
		Form(std::string str, int sign_amt, int exec_amt);
		Form(Form const &src); // copy constructor
		Form & operator=(Form const & rhs); // assignment oprator overload
		~Form(void);
		
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
		std::string getName(void) const;
		bool getSign(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;
		
		//other member functions
		void beSigned(Bureaucrat &B);
};
std::ostream & operator<<(std::ostream & o, Form const & i);


# endif