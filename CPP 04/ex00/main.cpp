/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:55:27 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/17 16:04:55 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* _a = new Animal();
	const Animal* a_dog = new Dog();
	const Animal* a_cat = new Cat();
	std::cout << "The type of animal is " << _a->getType() << " " << std::endl;
	std::cout << "The type of animal is " << a_dog->getType() << " " << std::endl;
	std::cout << "The type of animal is " << a_cat->getType() << " " << std::endl;
	_a->makeSound();
	std::cout << "Dog: ";
	a_dog->makeSound();
	std::cout << "Cat: ";
	a_cat->makeSound(); //will output the cat sound!

	delete _a;
	delete a_dog;
	delete a_cat;
	
	// const WrongAnimal* a = new WrongAnimal();
	// const WrongAnimal* b = new WrongCat();
	// std::cout << "The type of the animal is "<< b->getType() << " " << std::endl;
	// std::cout << "WrongAnimal: ";
	// a->makeSound();
	// std::cout << "WrongCat: ";
	// b->makeSound();

	// delete a;
	// delete b;
	return (0);
}