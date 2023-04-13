/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:29:46 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/13 16:32:48 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	index = 0;
}

Contact::~Contact()
{

}

int Contact::getIndex()
{
	return (index);
}

std::string Contact::getFirst()
{
	return (first_name);
}
std::string Contact::getLast()
{
	return (last_name);
}
std::string Contact::getNick()
{
	return (nick_name);
}

std::string Contact::getPhone()
{
	return (phone_number);
}

std::string Contact::getSecret()
{
	return (darkest_secret);
}

void Contact::setIndex(int new_index)
{
	index = new_index;
}

void Contact::setFirst(std::string str)
{
	first_name = str;
}

void Contact::setLast(std::string str)
{
	last_name = str;
}

void Contact::setNick(std::string str)
{
	nick_name = str;
}

void Contact::setPhone(std::string str)
{
	phone_number = str;
}

void Contact::setSecret(std::string str)
{
	darkest_secret = str;
}
