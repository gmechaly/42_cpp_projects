/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:40 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/25 19:13:50 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0){
	return ;
}

Fixed::Fixed(const Fixed& other){
	*this = other;
	return ;
}

Fixed::Fixed(const int nbr){
	_val = nbr << _bits;
	return ;
}

Fixed::Fixed(const float nbr){
	_val = roundf(nbr * (1 << _bits));
	return ;
}

Fixed& Fixed::operator=(const Fixed& other){
	if (this != &other)
	{
		this->_val = other._val;
	}
	return (*this);
}

Fixed::~Fixed(void){
	return ;
}

int	Fixed::getRawBits(void) const{
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

bool	Fixed::operator<(const Fixed &rhs) const {
	return (this->_val < rhs._val);
}

bool	Fixed::operator>(const Fixed &rhs) const {
	return (this->_val > rhs._val);
}

bool	Fixed::operator<=(const Fixed &rhs) const {
	return (this->_val <= rhs._val);
}

bool	Fixed::operator>=(const Fixed &rhs) const {
	return (this->_val >= rhs._val);
}

bool	Fixed::operator==(const Fixed &rhs) const {
	return (this->_val == rhs._val);
}

bool	Fixed::operator!=(const Fixed &rhs) const {
	return (this->_val != rhs._val);
}

Fixed	Fixed::operator+(const Fixed &rhs) const {
	return ((Fixed)(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const {
	return ((Fixed)(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const {
	return ((Fixed)(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const {
	if (rhs._val == 0){
		std::cerr << "Error: cannot divide by 0." << std::endl;
		return (false);
	}
	return ((Fixed)(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator++() {
	this->_val += 1;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	original = *this;

	this->_val += 1;
	return (original);
}

Fixed	Fixed::operator--() {
	this->_val -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	original = *this;

	this->_val -= 1;
	return (original);
}

 Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
	out << fixed.toFloat();
	return (out);
}