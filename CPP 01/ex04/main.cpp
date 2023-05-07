/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:14:22 by arafeeq           #+#    #+#             */
/*   Updated: 2023/04/30 14:44:29 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filestream.hpp"

int parse(int argc, char **argv, std::ifstream& input_stream)
{
	if (argc != 4)
	{
		std::cout << RED;
		std::cout << "Invalid amount of arguments" << std::endl;
		std::cout << RESET;
		return (1);
	}
	
	input_stream.open(argv[1]);
	if (!input_stream)
	{
		std::cout << RED;
		std::cout << "File does not exist" << std::endl;
		std::cout << RESET;
		return (1);
	}
	
	if (input_stream.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << RED;
		std::cout << "File is empty" << std::endl;
		std::cout << RESET;
		return (1);
	}
	return (0);
	
}

int main(int argc, char **argv)
{
	std::stringstream o_file;
	std::ifstream input_stream;
	std::string line;
	std::string out_file;
	size_t pos;
	
	if (parse(argc, argv, input_stream))
		return (1);

	o_file << argv[1] << ".replace";
	out_file = o_file.str();
	std::ofstream output_stream(out_file);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	int length = s1.length();
	int line_len;
	while (std::getline(input_stream, line))
	{
		line_len = line.length();
		pos = line.find(argv[2]);
		while (pos != std::string::npos && s1 != "")
		{
			//std::cout << pos << std::endl;
			line.erase(pos, length);
			line.insert(pos, s2);
			pos = line.find(argv[2]);
		}
		output_stream << line;
		if (!input_stream.eof())
			output_stream << std::endl;
	}
	input_stream.close();
}
