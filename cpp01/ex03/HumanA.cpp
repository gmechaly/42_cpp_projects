/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:30:09 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/19 16:47:47 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_to_set, Weapon &weaponA) : _WeaponA(weaponA) {
	set_name(name_to_set);
	std::cout << _name << ": constructor called" << std::endl;
	return ;
}

HumanA::~HumanA(void) {
	std::cout << _name << ": destructor called" << std::endl;
	return ;
}

void	HumanA::set_name(std::string name_to_set) {
	_name = name_to_set;
	return ;
}

void	HumanA::attack(void) {
	std::cout << _name << " attacks with their " << _WeaponA.getType() << std::endl;
	return ;
}