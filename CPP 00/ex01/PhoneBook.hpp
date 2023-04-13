/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:07:13 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/13 17:03:57 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"

#define SALMON "\033[1;3;38:5:137m"
#define WHEAT "\033[1;38:5:101m"
#define RED_BOLD "\033[1;31m"
#define RED "\033[0;31m"
#define BOLD_ITALIC_LIGHT_PURPLE "\033[1;3;38:5:96m"
#define MUSTARD_YELLOW "\033[1;38:5:136m"
#define BROWN "\033[1;38:5:52m"
#define RESET "\033[0m"


class PhoneBook
{
	private:
		Contact contacts[8];
		int contacts_amt;
		int i;
	public:
		PhoneBook();
		~PhoneBook();
	void	add_contact(void);
	void	search_contact(void);
};

void	exit_contact(void);
void	contact_question(std::string question);
void	right_aligned(std::string str);
void	eof_field(void);
void	empty_field(std::string str);
int 	str_isspace(std::string str);

#endif