/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:59:41 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/14 19:19:42 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap Phil") {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called for " << _name << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap parametric constructor called for " << _name << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called for " << _name << std::endl;
	*this = other;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_attackDamage = rhs.getAttackDamage();
		this->_energyPoints = rhs.getEnergyPoints();
	}
	std::cout << _name << ": ScavTrap assignation constructor called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called for " << _name << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target) {
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " cannot attack." << std::endl;
		return ;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode !" << std::endl;
	return ;
}
