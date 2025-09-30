/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:40 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/25 17:26:30 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0){
	std::cout << "Default Constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed::Fixed(const int nbr){
	std::cout << "Int constructor called" << std::endl;
	_val = nbr << _bits;
	return ;
}

Fixed::Fixed(const float nbr){
	std::cout << "Float constructor called" << std::endl;
	_val = roundf(nbr * (1 << _bits));
	return ;
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_val = other._val;
	}
	return (*this);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits(int const raw){
	this->_val = raw;
	return ;
}

int	Fixed::toInt(void) const{
	return (int) (_val >> _bits);
}

float Fixed::toFloat(void) const{
	return (float) _val / (1 << _bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}