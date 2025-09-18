/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 21:39:38 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/18 15:25:42 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*horde;
	int		N = 4;

	horde = zombieHorde(N, "fantastic four");
	if (!horde)
		return (std::cout << "number of zombies is invalid" << std::endl, 0);
	for (int i = 0; i < N; i++){
		std::cout << "Zombie number " << i << " about to announce itself" << std::endl;
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}