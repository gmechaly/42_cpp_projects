/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:14:28 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/14 19:22:57 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap Phil") {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called for " << _name << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap parametric constructor called for " << _name << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called for " << _name << std::endl;
	*this = other;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_attackDamage = rhs.getAttackDamage();
		this->_energyPoints = rhs.getEnergyPoints();
	}
	std::cout << _name << ": FragTrap assignation constructor called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called for " << _name << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " sends a high five to the guys !" << std::endl;
	return ;
}
