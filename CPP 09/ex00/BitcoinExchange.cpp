/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:38:33 by arafeeq           #+#    #+#             */
/*   Updated: 2023/07/20 21:23:03 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	// std::cout << GREEN_OLIVE;
	// std::cout << "Default Constructor for BitcoinExchange called" << std::endl;
	// std::cout << RESET;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &src)
{
	// std::cout << GREEN_LIGHT;
	// std::cout << "Copy constructor for BitcoinExchange called" << std::endl;
	// std::cout << RESET;
	*this = src;
}

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	// std::cout << "Copy assignment operator for BitcoinExchange called" << std::endl;
	int i = 0;
	if (this != &rhs)
	{
		this->btc_map = rhs.btc_map; 
		this->user_map = rhs.user_map;
		while (i > 5)
		{
			this->str_arr[i] = rhs.str_arr[i];
			i++;
		}
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange(void)
{
	// std::cout << RED_LIGHT;
	// std::cout << "Destructor for BitcoinExchange called" << std::endl;
	// std::cout << RESET;
}

// -- MEMBER FUNCTIONS --

void BitcoinExchange::ft_split(std::string str, char delimiter)
{
	std::string substring = "";
	int j = 0;
	size_t x = 0;
	while (str[x] == delimiter)
		x++;
	for (size_t i = x; i < str.length(); i++)
	{
		if (str[i] != delimiter)
		{
			substring += str[i];
		}
		else
		{
			str_arr[j] = substring;
			j++;
			if (j > 4)
			{
				str_arr[j] = "";
				return ;
			}
			while (str[i] == delimiter)
				i++;
			i--;
			substring = "";
		}
	}
	str_arr[j] = substring;
}

int BitcoinExchange::isLeap(int year)
{
	int leap_start = 2012;
	while (leap_start < std::atoi(str_arr[0].c_str()))
	{
			leap_start += 4;
	}
	if (year == leap_start)
		return (1);
	return (0);
}

int BitcoinExchange::date_parse(std::string date)
{
	int x = 0;
	int date_flag = 0;
	for (int j = 0; date[j] != '\0'; j++)
	{
		if (j > 10)
			date_flag = 1;
		if (j == 10 && (date[j] != ' '))
			date_flag = 1;
		else if (j < 10)
		{
			if (date[j] != '-' && !(date[j] >= '0' && date[j] <= '9'))
				date_flag = 1;
			if (date[j] == '-')
				x++;
			if (date[j] == '-' && (j != 4 && j != 7))
				date_flag = 1;
			if (!(date[j] >= '0' && date[j] <= '9') && (j != 4 && j != 7))
				date_flag = 1;
		}
	}
	if (x != 2)
	{
		std::cout << RED << "Error: Invalid Date / Date Format." << RESET << std::endl;
		return (1);
	}
	if (date_flag == 1)
	{
		std::cout << RED << "Error: Invalid Date Format." << RESET << std::endl;
		return (1);
	}
	return (0);
}

int BitcoinExchange::value_parse(std::string value)
{
	int value_flag = 0;
	int dot_count = 0;
	int sign_count = 0;
	int i = 1;

	if (value != "")
	{
		if (value[0] != ' ')
			value_flag = 1;
		if (value.size() <= 1)
			value_flag = 1;
		while (value[i] != '\0')
		{
			if (value[i] != '-' && value[i] != '.' && !(value[i] >= '0' && value[i] <= '9'))
				value_flag = 1;
			if (value[i] == '.')
			{
				dot_count++;
				if (!(value[i + 1] >= '0' && value[i + 1] <= '9'))
					value_flag = 1;
			}
			if (value[i] == '-')
				sign_count++;
			i++;
		}
	}
	if (sign_count > 1)
		value_flag = 1;
	if (dot_count > 1)
		value_flag = 1;
	if (value_flag == 1)
	{
		std::cout << RED << "Error: Invalid Value." << RESET << std::endl;
		return (1);
	}
	return (0);
}

void BitcoinExchange::take_input_calc(std::string filename)
{
	std::ifstream in("data.csv");
	std::string line = "";
	int sl;
	float val;

	if (!in)
	{
		std::cout << RED << "Error: Data file does not exist." << RESET << std::endl;
		in.close();
		return ;
	}
	// take input from data.csv
	while (std::getline(in, line))
	{
		ft_split(line, ',');
		val = atof(str_arr[1].c_str());
		btc_map.insert(std::pair<std::string, float>(str_arr[0], val));
	};
	in.close();

	// taking input from input.txt
	std::ifstream in_file(filename.c_str());
	std::getline(in_file, line);
	if (line == "")
	{
		std::cout << RED << "Error: File is Empty." << RESET << std::endl;
		return ;
	}
	else if (line != "date | value")
	{
		std::cout << RED << "Error: Wrong Format / Format Missing" << RESET << std::endl;
		return ;
	}
	std::string val_;
	while (std::getline(in_file, line))
	{
		// parse line
		if (line[0] == '|')
		{
			std::cout << RED << "Error: Date Not Provided." << RESET << std::endl;
				return ;
		}
		clean_array();
		ft_split(line, '|');
		for (sl = 0; str_arr[sl] != ""; sl++); // make it better
		if (sl > 2)
		{
			std::cout << RED << "Error: Multiple Values." << RESET << std::endl;
			return ;
		}
		if (!str_arr[1].empty())
			val_ = str_arr[1];
		else
			val_ = "";
		user_map.insert(std::pair<std::string, std::string>(str_arr[0], val_));
	}
	in_file.close();
	std::map<std::string, std::string>::const_iterator it = user_map.begin();
	std::map<std::string, float>::const_iterator it_m;
	while (it != user_map.end())
	{
		int date_parse_res;
		int value_parse_res;
		int it_parse_res;

		date_parse_res = date_parse(it->first);
		if (date_parse_res != 1)
			value_parse_res = value_parse(it->second);
		if (date_parse_res != 1 && value_parse_res != 1)
			it_parse_res = it_parse(it);
		it_m = btc_map.find(it->first);
		if (it_m == btc_map.end() && it_parse_res == 0 && date_parse_res == 0 && value_parse_res == 0)
		{
			for (it_m = btc_map.begin();it_m != btc_map.end();it_m++)
			{
				if (it_m->first > it->first)
					break ;
			}
			it_m--;
			std::cout << it->first << " =>" << it->second <<
				 " = " << (std::atof(it->second.c_str()) * it_m->second) << std::endl;
		}
		else if (it_m != btc_map.end() && it_parse_res == 0)
		{
			std::cout << it->first << " =>" << it->second <<
				 " = " << (std::atof(it->second.c_str()) * it_m->second) << std::endl;
		}
		it++;
	}
}

int BitcoinExchange::it_parse(std::map<std::string, std::string>::const_iterator it)
{
	ft_split(it->first, '-');
	if (it->second.empty())
	{
		std::cout << RED << "Error: bad input => " << it->first << RESET << std::endl;
		return (1);
	}
	else if (std::atof(it->second.c_str()) < 0)
	{
		std::cout << RED << "Error: Not a Positive Number." << RESET << std::endl;
		return (1);
	}
	else if ((long)std::atof(it->second.c_str()) > 1000)
	{
		std::cout << RED << "Error: Too Large a Number" << RESET << std::endl;
		return (1);
	}
	else if (std::atoi(str_arr[1].c_str()) > 12 || std::atoi(str_arr[1].c_str()) <= 0 || std::atoi(str_arr[2].c_str()) <= 0)
	{
		std::cout << RED << "Error: Invalid Date" << RESET << std::endl;
		return (1);
	}
	else if (std::atoi(str_arr[0].c_str()) < 2009)
	{
		std::cout << RED << "Error: Block Chain wasn't Launched Yet!" << RESET << std::endl;
		return (1);
	}
	else if ((std::atoi(str_arr[1].c_str()) == 1 || std::atoi(str_arr[1].c_str()) == 3 || std::atoi(str_arr[1].c_str()) == 5 || std::atoi(str_arr[1].c_str()) == 7
		|| std::atoi(str_arr[1].c_str()) == 8 || std::atoi(str_arr[1].c_str()) == 10 || std::atoi(str_arr[1].c_str()) == 12) && std::atoi(str_arr[2].c_str()) > 31)
	{
		std::cout << RED << "Error: Invalid Date" << RESET << std::endl;
		return (1);
	}
	else if ((std::atoi(str_arr[1].c_str()) == 4 || std::atoi(str_arr[1].c_str()) == 6 || std::atoi(str_arr[1].c_str()) == 9
		|| std::atoi(str_arr[1].c_str()) == 11) && std::atoi(str_arr[2].c_str()) > 30)
	{
		std::cout << RED << "Error: Invalid Date" << RESET << std::endl;
		return (1);
	}
	else if (std::atoi(str_arr[1].c_str()) == 2 && std::atoi(str_arr[2].c_str()) > 28)
	{
		if (isLeap(std::atoi(str_arr[0].c_str())) && std::atoi(str_arr[2].c_str()) == 29)
			return (0);
		else
		{
			std::cout << RED << "Error: Invalid Date" << RESET << std::endl;
			return (1);
		}
			
	}
	return (0);
}

void BitcoinExchange::clean_array(void)
{
	str_arr[0] = "";
	str_arr[1] = "";
	str_arr[2] = "";
	str_arr[3] = "";
}