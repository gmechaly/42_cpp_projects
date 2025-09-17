/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:21:09 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/17 21:48:09 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie's constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << name << " zombie destructor called" << std::endl;
	return ;
}

void	Zombie::set_name(std::string zombies_name) {
	name = zombies_name;
	return ;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}