/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:58:32 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/04 13:48:12 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal() : type("Animal") {}
		virtual void makeSound() const {std::cout << "Animal sound\n";};
		virtual ~Animal(){std::cout << this->type << " destructor called\n";};
		std::string getType() const {return this->type;};
};

class Dog : public Animal{
	public:
		Dog() {std::cout << "Dog Constructor called\n"; this->type = "Dog";};
		void makeSound() const ;
		std::string getType() const {return this->type;};
		~Dog(){std::cout << this->type << " destructor called\n";};
};

class Cat : public Animal{
	public:
		Cat() {std::cout << "Cat Constructor called\n";  this->type = "Cat";};
		void makeSound() const ;
		std::string getType() const {return this->type;};
		~Cat(){std::cout << this->type << " destructor called\n";};
};

#endif