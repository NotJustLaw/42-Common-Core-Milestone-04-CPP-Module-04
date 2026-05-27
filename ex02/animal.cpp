/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 14:00:00 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/27 13:14:09 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("Animal") {
}

Animal::Animal(const Animal& other) : type(other.type) {
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal() {
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
	this->brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other) {
	std::cout << "Dog Copy Constructor called\n";
	this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy Assignment Operator called\n";
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << this->type << " destructor called\n";
	delete this->brain;
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
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat Copy Constructor called\n";
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy Assignment Operator called\n";
	if (this != &other) {
		Animal::operator=(other);
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << this->type << " destructor called\n";
	delete this->brain;
}

void Cat::makeSound() const {
	std::cout << "Meow meow\n";
}

std::string Cat::getType() const {
	return this->type;
}