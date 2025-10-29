/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:36:31 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/27 20:15:25 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	this->DogBrain = new Brain();
	return ;
}

Dog::Dog(std::string typeDog) : Animal(typeDog) {
	std::cout << "Dog assigned to type " << _type << std::endl;
	this->DogBrain = new Brain();
	return ;
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->_type = other.getType();
	std::cout << "Dog copy constructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs) {
	if (this != &rhs)
		this->_type = rhs.getType();
	std::cout << "Dog assignation constructor called" << std::endl;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->DogBrain;
	return ;
}

void	Dog::makeSound(void) const {
	std::cout << "🐶: WOOF!" << std::endl;
	return ;
}
