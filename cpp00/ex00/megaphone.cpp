/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:19:11 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/04 18:56:20 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for(int i = 1; av[i]; i++)
	{
		for (int j = 0; av[i][j]; j++)
			std::cout << (char)toupper(av[i][j]);
		// std::cout << " ";
	}
	std::cout << "\n";
}