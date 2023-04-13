/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:19:43 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/13 16:29:37 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	private:
		int index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;

	public:
		Contact();
		~Contact();
	int getIndex();
	std::string getFirst();
	std::string getLast();
	std::string getNick();
	std::string getPhone();
	std::string getSecret();
	
	void setIndex(int new_index);
	void setFirst(std::string str);
	void setLast(std::string str);
	void setNick(std::string str);
	void setPhone(std::string str);
	void setSecret(std::string str);
};

#endif