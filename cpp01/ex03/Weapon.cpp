/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:42:57 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/19 17:32:16 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type) {
	setType(weapon_type);
	// std::cout << _type << ": weapon constructor called" << std::endl;
	return ;
}

Weapon::~Weapon(void) {
	// std::cout << _type << ": weapon destructor called" << std::endl;
	return ;
}

const std::string	&Weapon::getType(void) const {
	const std::string	&typeREF = _type;
	return (typeREF);
}

void	Weapon::setType(std::string type_to_set) {
	_type = type_to_set;
	return ;
}
