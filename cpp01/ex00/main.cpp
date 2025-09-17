/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:39:38 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/17 22:03:22 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*d_john;

	std::cout << std::left;
	std::cout << std::setfill('-') << std::setw(60) << "-----calling newZombie()" << std::endl;
	d_john = newZombie("Dynamic John");
	std::cout << std::setfill('-') << std::setw(60) << "-----newZombie() has returned" << std::endl;

	std::cout << std::setfill('-') << std::setw(60) << "-----calling randomChump()" << std::endl;
	randomChump("Automatic Derrick");
	std::cout << std::setfill('-') << std::setw(60) << "-----randomChump() has returned" << std::endl;

	delete d_john;
	
	return (0);
}