/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:58:35 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/27 14:01:26 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

int main()
{
	std::cout << "=== Test 1: Abstract Animal - can only use Dog/Cat ===" << std::endl;
	// const Animal* meta = new Animal(); //We commment this bc the animal is now abstrac
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;

	std::cout << "\n=== Test 2: Array of Animals (4 total: 2 dogs, 2 cats) ===" << std::endl;
	const Animal* animals[4];
	
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	for (int k = 0; k < 4; k++) {
		std::cout << animals[k]->getType() << ": ";
		animals[k]->makeSound();
	}

	std::cout << "\n--- Deleting all animals ---\n";
	for (int k = 0; k < 4; k++) {
		delete animals[k];
	}

	std::cout << "\n=== Test 3: Deep Copy Test with Copy Constructor ===" << std::endl;
	Dog originalDog;
	originalDog.getType();
	
	std::cout << "\nCopying dog...\n";
	Dog copiedDog = originalDog;

	std::cout << "\nCopied dog created. Both will go out of scope.\n\n";

	std::cout << "\n=== Test 4: Deep Copy Test with Assignment Operator ===" << std::endl;
	Cat cat1;
	Cat cat2;
	
	std::cout << "\nAssigning cat1 to cat2...\n";
	cat2 = cat1;
	
	std::cout << "\nAssignment complete. Both will go out of scope.\n\n";

	std::cout << "\n=== Test 5: Copy Constructor ===" << std::endl;
	Dog dog1;
	
	std::cout << "\nCopying dog1 to dog2...\n";
	Dog dog2 = dog1;
	
	std::cout << "\nBoth dogs have independent brains (deep copy).\n\n";

	return 0;
}