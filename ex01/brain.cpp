/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: notjustlaw <notjustlaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:48:09 by notjustlaw        #+#    #+#             */
/*   Updated: 2026/05/27 12:54:28 by notjustlaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called\n";
	for (int i = 0; i < 100; i++){
		this->ideas[i] = "";
	}
}

Brain::Brain(const Brain& other){
	std::cout << "Brain copy constructor called\n";
	for (int i = 0; i < 100; i++){
		this->ideas[i] = other.ideas[i];
	}	
}

Brain& Brain::operator=(const Brain& other){
	std::cout << "Brain copy assignment operator called\n";
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain Destructor called\n";
}