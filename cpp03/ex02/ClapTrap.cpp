/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 17:17:34 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/14 18:52:18 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << name << ": ClapTrap constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_attackDamage = other.getAttackDamage();
	this->_energyPoints = other.getEnergyPoints();
	std::cout << _name << ": ClapTrap copy constructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_attackDamage = rhs.getAttackDamage();
		this->_energyPoints = rhs.getEnergyPoints();
	}
	std::cout << _name << ": ClapTrap assignation constructor called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << _name << ": ClapTrap destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0 || this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " cannot attack." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->_hitPoints)
		amount = this->_hitPoints;
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " is already out of hit points ! Leave him alone !" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage ! Hit points left : "  << this->_hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0 || this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " cannot repair itself." << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " repairs itself, regaining " << amount << " hit points ! Hit points left : " << this->_hitPoints << std::endl;
	this->_energyPoints--;
	return ;
}

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}
unsigned int	ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int	ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int	ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}