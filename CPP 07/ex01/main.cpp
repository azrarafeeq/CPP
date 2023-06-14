/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:03:14 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/11 19:00:09 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void secret(T elem)
{
	if ((elem >= 97 && elem <= 109) || (elem >= 65 && elem <= 77)
		|| (elem >= 48 && elem <= 53))
		elem = elem + 1;
	else
		elem = elem - 1;
}


template <typename T>
void decode_secret(T elem)
{
	if ((elem >= 97 && elem <= 109) || (elem >= 65 && elem <= 77)
		|| (elem >= 48 && elem <= 53))
		elem = elem - 1;
	else
		elem = elem + 1;
}

int main(void)
{
	int i = -1;
	int int_array[] = {2, 4, 6, 8};
	char char_array[] = {'a', 'z', 'r', 'a'};

	iter(int_array, 4, &secret);
	iter(char_array, 4, &secret);
	std::cout << "---- arrays after secret function ----" << std::endl;
	std::cout << "INT ARRAY: " << std::endl;
	while (++i < 4)
		std::cout << int_array[i];
	std::cout << std::endl;
	std::cout << "CHAR ARRAY: " << std::endl;
	i = -1;
	while (++i < 4)
		std::cout << char_array[i];
	std::cout << std::endl;
	iter(int_array, 4, &decode_secret);
	iter(char_array, 4, &decode_secret);
	std::cout << " ------- arrays after decode_secret function ------" << std::endl;
	std::cout << "INT ARRAY: " << std::endl;
	i = -1;
	while (++i < 4)
		std::cout << int_array[i];
	std::cout << std::endl;
	std::cout << "CHAR ARRAY: " << std::endl;
	i = -1;
	while (++i < 4)
		std::cout << char_array[i];
	std::cout << std::endl;
}