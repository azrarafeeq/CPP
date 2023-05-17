/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:55:27 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 13:38:40 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//TESTS FOR MEMORY LEAK
	int n = 4;
	int i = 0;
	const Animal* animal[n];
	
	while (i < n / 2)
	{
		animal[i] = new Dog();
		i++;
	}
	while (i < n)
	{
		animal[i] = new Cat();
		i++;
	}
	
	i = 0;
	while (i < n)
	{
		delete animal[i];
		i++;
	}
	
	// TESTS FOR DEEP COPY vs SHALLOW COPY
	// Dog _dog = Dog();
	// Cat _cat = Cat();
	// Dog dog_copy = _dog;
	// Cat cat_copy = _cat;
	
	//SHALLOW COPY TEST	
	// WrongCat _wrongcat;
	// WrongCat _wrongcat_copy = _wrongcat;

	
	
	
	return (0);
}