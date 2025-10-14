/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:19:39 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/14 18:57:35 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void	print_status(ClapTrap instance) {
	std::cout << "STATUS FOR " << instance.getName() << " :" << std::endl;
	std::cout << "Hit points : " << instance.getHitPoints() << std::endl;
	std::cout << "Energy points : " << instance.getEnergyPoints() << std::endl;
	return ;
}

int main(void) {
	std::cout << "\n=== Creating ScavTrap ===" << std::endl;
	ScavTrap st1("Guardian");

	std::cout << "\n=== Copy & Assignment ===" << std::endl;
	ScavTrap st2(st1);
	ScavTrap st3;
	st3 = st1;

	std::cout << "\n=== Actions ===" << std::endl;
	st1.attack("Intruder");
	st1.guardGate();
	st1.takeDamage(30);
	st1.beRepaired(20);
	
	std::cout << "\n=== Status ===" << std::endl;
	print_status(st1);
	std::cout << std::endl;
	print_status(st2);
	std::cout << std::endl;
	print_status(st3);
	std::cout << std::endl;
	
	std::cout << "\n=== Destruction ===" << std::endl;
	return 0;
}

/*int	main(void) {
	ClapTrap	instance1("Jim");
	ClapTrap	instance2("Bob");

	print_status(instance1);
	std::cout << std::endl;
	instance1.attack("Evil Jimmy");
	instance1.takeDamage(2);
	std::cout << std::endl;
	print_status(instance1);
	std::cout << std::endl;
	instance1.beRepaired(4);

	std::cout << std::endl;
	std::cout << std::endl;

	print_status(instance2);
	std::cout << std::endl;
	instance2.attack("Evil Bobby");
	instance2.takeDamage(10);
	std::cout << std::endl;
	print_status(instance2);
	std::cout << std::endl;
	instance2.beRepaired(15);
	instance2.attack("Evil Bobby");
	instance2.takeDamage(5);

	std::cout << std::endl;
	std::cout << std::endl;

	print_status(instance1);
	std::cout << std::endl;
	print_status(instance2);
	return (0);
}*/