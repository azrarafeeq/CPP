/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 10:42:16 by arafeeq           #+#    #+#             */
/*   Updated: 2023/06/09 13:03:58 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main(void)
{
	Data		*data = new Data;
	Serializer	s;
	uintptr_t	ptr;
	
	data->age = 42;
	
	std::cout << "Data age before: " << data->age << std::endl;
	ptr = s.serialize(data);
	// std::cout << "Ptr is :" << ptr << std::endl;
	data = s.deserialize(ptr);
	std::cout << "Data age after: " << data->age << std::endl;
	
	delete data;
}
