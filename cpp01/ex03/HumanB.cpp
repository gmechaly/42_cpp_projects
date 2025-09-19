/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:30:31 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/19 20:02:58 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_to_set) : _WeaponB(NULL) {
	set_name(name_to_set);
	std::cout << _name << ": constructor called" << std::endl;
	return ;
}

HumanB::~HumanB(void) {
	std::cout << _name << ": destructor called" << std::endl;
	// delete _WeaponB;
	return ;
}

void	HumanB::set_name(std::string name_to_set) {
	_name = name_to_set;
	return ;
}

void	HumanB::setWeapon(Weapon &weaponB) {
	_WeaponB = &weaponB;
	return ;
}

void	HumanB::attack(void) {
	if (_WeaponB)
		std::cout << _name << " attacks with their " << (*_WeaponB).getType() << std::endl;
	else
		std::cout << _name << " attacks with no weapons" << std::endl;
	return ;
}