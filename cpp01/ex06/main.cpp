/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 15:49:38 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/24 17:09:07 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	std::string level;
	Harl		complainer;

	(void)ac;
	if (!av[1]) {
		std::cout << "Error: Usage: ./harlFilter <arg>" << std::endl << "Now exiting program." << std::endl;
		return (1);
	}
	level = av[1];
	complainer.complain(level);
	return (0);
}