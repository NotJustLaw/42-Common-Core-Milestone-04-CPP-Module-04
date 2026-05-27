/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:00:00 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/27 12:58:55 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal Constructor called\n";
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << "Animal Copy Constructor called\n";
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal Copy Assignment Operator called\n";
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << this->type << " destructor called\n";
}

void Animal::makeSound() const {
	std::cout << "Animal sound\n";
}

std::string Animal::getType() const {
	return this->type;
}

Dog::Dog() : Animal() {
	std::cout << "Dog Constructor called\n";
	this->type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog Copy Constructor called\n";
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy Assignment Operator called\n";
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << this->type << " destructor called\n";
}

void Dog::makeSound() const {
	std::cout << "Wouf wouf\n";
}

std::string Dog::getType() const {
	return this->type;
}

Cat::Cat() : Animal() {
	std::cout << "Cat Constructor called\n";
	this->type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat Copy Constructor called\n";
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy Assignment Operator called\n";
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << this->type << " destructor called\n";
}

void Cat::makeSound() const {
	std::cout << "Meow meow\n";
}

std::string Cat::getType() const {
	return this->type;
}