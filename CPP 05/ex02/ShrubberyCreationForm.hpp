/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:13:12 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/27 14:48:34 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target_name;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src); // copy constructor
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs); // assignment oprator overload
		~ShrubberyCreationForm(void);
		
		//getters
		std::string getTargetName(void) const;
		
		//member function (pure function in parent)
		int execute(Bureaucrat const & executor) const;
};

#endif