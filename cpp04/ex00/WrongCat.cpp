/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:30:25 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/21 19:40:47 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "Wrong Cat";
	std::cout << "WrongCat " <<  _type << " is created" <<std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	_type = other._type;
	std::cout << "WrongCat " <<  _type << " has been copied" <<std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		WrongAnimal::operator=(other);        
		_type = other._type;
    }
	std::cout << "WrongCat" <<  _type << " has been assigned" <<std::endl;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat" <<  _type << " is destroyed" <<std::endl;
	return ;
}

void WrongCat::makeSound(void) const {
	std::cout << "Wrong Meow" <<std::endl;
	return ;
}