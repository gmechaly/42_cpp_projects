/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:29:35 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/19 20:02:58 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void) {
	std::cout << "----------HUMAN A PART----------" << std::endl;

	Weapon	weaponA = Weapon("crude spiked club");
	HumanA	bob("Bob", weaponA);

	bob.attack();
	weaponA.setType("some other type of club");
	bob.attack();

	std::cout << std::endl << "----------HUMAN B PART----------" << std::endl;

	Weapon	weaponB = Weapon("crude spiked club");
	HumanB	jim("Jim");

	jim.setWeapon(weaponB);
	jim.attack();
	weaponB.setType("some other type of club");
	jim.attack();
	
	std::cout << std::endl;
	return (0);
}