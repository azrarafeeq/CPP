/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:38:43 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/20 21:21:58 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <map>

# define RED_LIGHT "\033[1;38:5:131m"
# define RED "\033[0;31m"
# define GREEN_OLIVE "\033[1;38:5:107m"
# define GREEN_LIGHT "\033[1;38:5:150m"
# define MUSTARD "\033[38:5:136m"
# define RESET "\033[0m"

class BitcoinExchange{
	private:
		std::map<std::string, float> btc_map;
		std::multimap<std::string, std::string> user_map;
		std::string str_arr[5];
	public:
		// orthodox canonical form
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange & operator=(BitcoinExchange const & rhs);
		~BitcoinExchange(void);
		
		// member functions
		void ft_split(std::string str, char delimiter);
		int isLeap(int year);
		void take_input_calc(std::string filename);
		int date_parse(std::string date);
		int value_parse(std::string value);
		int it_parse(std::map<std::string, std::string>::const_iterator it);
		void clean_array(void);
};

#endif