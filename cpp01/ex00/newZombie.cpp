/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:24:31 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/17 21:48:09 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name){
	Zombie	*new_Zombie;

	new_Zombie = new Zombie();
	new_Zombie->set_name(name);
	return (new_Zombie);
}