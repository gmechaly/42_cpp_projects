/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:22:54 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/22 19:59:46 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->CatBrain = new Brain();
	return ;
}

Cat::Cat(std::string typeCat) : Animal(typeCat) {
	std::cout << "Cat assigned to type " << _type << std::endl;
	this->CatBrain = new Brain();
	return ;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->_type = other.getType();
	std::cout << "Cat copy constructor called" << std::endl;
	this->CatBrain = new Brain(*other.CatBrain);
	return ;
}

Cat	&Cat::operator=(const Cat &rhs) {
	if (this != &rhs) {
		this->_type = rhs.getType();
		delete CatBrain;
		this->CatBrain = new Brain(*rhs.CatBrain);
	}
	std::cout << "Cat assignation constructor called" << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->CatBrain;
	return ;
}

void	Cat::makeSound(void) const {
	std::cout << "🐱: Meooow" << std::endl;
	return ;
}