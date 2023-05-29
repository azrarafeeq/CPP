/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:38:16 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/27 14:49:06 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDETIALPARDONFORM_HPP
# define PRESIDETIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target_name;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src); // copy constructor
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs); // assignment oprator overload
		~PresidentialPardonForm(void);
		
		//member function (pure function in parent)
		int execute(Bureaucrat const & executor) const;
};

#endif