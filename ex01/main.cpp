/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:58:35 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/19 13:03:17 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "wrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	// const WrongAnimal* wrong_cat = new WrongCat();
	// std::cout << wrong_cat->getType() << std::endl;
	// wrong_cat->makeSound();
	
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	
	// delete wrong_cat;
	delete(meta);
	delete(j);
	delete(i);
	return 0;
}