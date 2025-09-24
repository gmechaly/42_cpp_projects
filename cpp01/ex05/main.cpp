/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:49:38 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/24 16:35:00 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	std::string level;
	Harl		complainer;

	while (1) {
		std::cout << "At which level will Harl complain ? ";
		if (!getline(std::cin, level))
			break ;
		complainer.complain(level);
	}
	std::cout << std::endl << "Thank you for listening to Harl's complains, he needed that. Now exiting program..." << std::endl;
	return (0);
}