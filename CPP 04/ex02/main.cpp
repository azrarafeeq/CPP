/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:55:27 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 13:33:57 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// CORRECT IMPLEMENTATION OF ABSTRACT CLASSES
	AAnimal *a_1 = new Cat();
	AAnimal *a_2 = new Dog();
	
	a_1->makeSound();
	a_2->makeSound();
	
	// WRONG IMPLEMENTATION OF ABSTARCT CLASSES
	//AAnimal *_a = new AAnimal();
	//WrongAnimal *wa_1 = new WrongCat();
	
	delete a_1;
	delete a_2;

	// delete _a;
	// delete wa_1;

	return (0);
}