/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:00:00 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/27 12:59:31 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "WrongAnimal Constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << "WrongAnimal Copy Constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << "WrongAnimal Copy Assignment Operator called\n";
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << this->type << " destructor called\n";
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound\n";
}

std::string WrongAnimal::getType() const {
	return this->type;
}

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat Constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat Copy Constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << "WrongCat Copy Assignment Operator called\n";
	if (this != &other) {
		WrongAnimal::operator=(other);
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << this->type << " destructor called\n";
}

void WrongCat::makeSound() const {
	std::cout << "Meow???\n";
}