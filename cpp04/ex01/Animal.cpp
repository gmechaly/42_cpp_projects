/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:15:46 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/31 18:03:45 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// ============== RAPPEL DE LA CLASSE ==============
// *
// class Animal {
// 	public :
// 		Animal(void);
// 		Animal(const Animal &other);
// 		Animal &operator=(const Animal &rhs);
// 		~Animal(void);
// *
// 		std::string	getType(void);
// 		std::string	setType(std::string newType);
// *
// 		virtual void	makeSound(void);
// *
// 	protected :
// 		std::string	_type;
// };
// =================================================

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal type \"" << _type << "\" constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &other) {
	this->_type = other.getType();
	std::cout << "Animal copy constructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &rhs) {
	if (this != &rhs)
		this->_type = rhs.getType();
	std::cout << "Animal assignation constructor called" << std::endl;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const {
	return (this->_type);
}

void	Animal::setType(std::string newType) {
	if (this->_type != newType)
		this->_type = newType;
	return ;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
	return ;
}

Brain	*Animal::getBrain(void) const {
	std::cout << "Objects type Animal don't have brain." << std::endl;
	return (NULL);
}
