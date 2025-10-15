/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:22:54 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/15 17:39:55 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(std::string typeCat) : _type(typeCat) {
	
}

Cat::Cat(const Cat &other) {
	this->_type = other.getType();
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs) {
	if (this != &rhs)
		this->_type = rhs.getType();
	std::cout << "Cat assignation constructor called" << std::endl;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) {
	std::cout << "Animal sound" << std::endl;
	return ;
}