/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:58:03 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/19 12:58:14 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal() : type("WrongAnimal") { std::cout << "WrongAnimal Constructor called\n"; }
		void makeSound() const { std::cout << "WrongAnimal sound\n"; }
		virtual ~WrongAnimal() { std::cout << this->type << " destructor called\n"; }
		std::string getType() const { return this->type; }
};

class WrongCat : public WrongAnimal {
	public:
		WrongCat() { std::cout << "WrongCat Constructor called\n"; this->type = "WrongCat"; }
		void makeSound() const { std::cout << "Meow???\n"; }
		~WrongCat() { std::cout << this->type << " destructor called\n"; }
};

#endif