/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:12:12 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/13 21:46:25 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	contacts_amt = 0;
	i = 0;
}

PhoneBook::~PhoneBook()
{

}

void	PhoneBook::add_contact(void)
{
	std::string temp_str;
	contacts[i].setIndex(i + 1);
	contact_question("Enter first name: ");
	contacts[i].setFirst("");
	while (contacts[i].getFirst().empty())
	{
		getline(std::cin, temp_str);
		contacts[i].setFirst(temp_str);
		if (str_isspace(contacts[i].getFirst()))
			contacts[i].setFirst("");;
		empty_field(contacts[i].getFirst());
	}
	contact_question("Enter last name: ");
	contacts[i].setLast("");
	while (contacts[i].getLast().empty())
	{
		getline(std::cin, temp_str);
		contacts[i].setLast(temp_str);
		if (str_isspace(contacts[i].getLast()))
			contacts[i].setLast("");
		empty_field(contacts[i].getLast());
	}
	contact_question("Enter nickname: ");
	contacts[i].setNick("");
	while (contacts[i].getNick().empty())
	{
		getline(std::cin, temp_str);
		contacts[i].setNick(temp_str);
		if (str_isspace(contacts[i].getNick()))
			contacts[i].setNick("");
		empty_field(contacts[i].getNick());
	}
	contact_question("Enter phone number: ");
	contacts[i].setPhone("");
	while (contacts[i].getPhone().empty())
	{
		getline(std::cin, temp_str);
		contacts[i].setPhone(temp_str);
		if (str_isspace(contacts[i].getPhone()))
			contacts[i].setPhone("");
		empty_field(contacts[i].getPhone());
	}
	contact_question("Enter darkest secret: ");
	contacts[i].setSecret("");
	while (contacts[i].getSecret().empty())
	{
		getline(std::cin, temp_str);
		contacts[i].setSecret(temp_str);
		if (str_isspace(contacts[i].getSecret()))
			contacts[i].setSecret("");
		empty_field(contacts[i].getSecret());
	}
	i++;
	if (i == 8)
		i = 0;
	if (contacts_amt < 8)
		contacts_amt++;
	system("clear");
}

void	PhoneBook::search_contact(void)
{
	int 		j;
	std::string user_input;

	j = 0;
	std::cout << BROWN;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|          M Y   P H O N E   B O O K        |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Index   |First Name| LastName | NickName |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (j < contacts_amt)
	{
		std::cout << "|";
		std::cout << std::setw(10) << contacts[j].getIndex() << "|";
		right_aligned(contacts[j].getFirst());
		right_aligned(contacts[j].getLast());
		right_aligned(contacts[j].getNick());
		std::cout << std::endl;
		j++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << RESET;
	std::cout << MUSTARD_YELLOW;
	std::cout << "Enter the index to be searched" << std::endl;
	std::cout << RESET;
	getline(std::cin, user_input);
	if (std::cin.eof())
		eof_field();
	else if (user_input.length() > 1 || !std::isdigit(user_input[0]) 
		|| (user_input[0] - '0') > contacts_amt || (user_input[0] - '0') > 8 || (user_input[0] - '0') <= 0)
	{	
		std::cout << RED;
		std::cout << "Invalid index" << std::endl;
		std::cout << RESET;
		return ;
	}
	j = 0;
	while (j < contacts_amt)
	{
		if (j + 1 == (user_input[0] - '0'))
		{
			std::cout << BOLD_ITALIC_LIGHT_PURPLE;
			std::cout << "Index          | " << contacts[j].getIndex() << std::endl;
			std::cout << "First Name     | " << contacts[j].getFirst() << std::endl;
			std::cout << "Last Name      | " << contacts[j].getLast() << std::endl;
			std::cout << "Nick Name      | " << contacts[j].getNick() << std::endl;
			std::cout << "Phone Number   | " << contacts[j].getPhone() << std::endl;
			std::cout << "Darkest Secret | " << contacts[j].getSecret() << std::endl;
			std::cout << RESET;
			break ;
		}
		j++;
	}
}
