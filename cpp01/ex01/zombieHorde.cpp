/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:10:22 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/18 15:25:42 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*horde;

	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].set_name(name);
	}
	return (horde);
}
