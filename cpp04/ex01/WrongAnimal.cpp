/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:29:05 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/21 19:40:16 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("DEFAULT-W") {
	std::cout << "default WrongAnimal " <<  _type << " is created" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) :  _type(other._type) {
	std::cout << "WrongAnimal " <<  _type << " has been copied" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		_type = other._type;
	std::cout << "WrongAnimal " <<  _type << " has been assigned" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal " <<  _type << " is destroyed" << std::endl;
	return ;
}

std::string WrongAnimal::getType() const{
	return (_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal makes a sound" << std::endl;
	return ;
}