/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:19:39 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/14 19:44:47 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

static void	print_status(ClapTrap instance) {
	std::cout << "STATUS FOR " << instance.getName() << " :" << std::endl;
	std::cout << "Hit points : " << instance.getHitPoints() << std::endl;
	std::cout << "Energy points : " << instance.getEnergyPoints() << std::endl;
	return ;
}

int main(void)
{
	std::cout << "\n=== Test 1: Construction ===" << std::endl;
	FragTrap ft("Fraggy");

	std::cout << "\n=== Test 2: Actions ===" << std::endl;
	ft.attack("target dummy");
	ft.takeDamage(30);
	ft.beRepaired(20);
	ft.highFivesGuys();

	std::cout << "\n=== Test 3: Copy & Assignment ===" << std::endl;
	FragTrap ft2(ft);
	FragTrap ft3;
	ft3 = ft;

	std::cout << "\n=== Test 4: Status ===" << std::endl;
	print_status(ft);
	std::cout << std::endl;
	print_status(ft2);
	std::cout << std::endl;
	print_status(ft3);
	std::cout << std::endl;


	std::cout << "\n=== Test 5: Polymorphism Check ===" << std::endl;
	ClapTrap *ptr = new FragTrap("Polymorph");
	ptr->attack("evil bot");
	delete ptr;

	std::cout << "\n=== End of program / Destruction ===" << std::endl;
	return 0;
}
