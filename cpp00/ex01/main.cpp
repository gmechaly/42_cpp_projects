/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:21:19 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/30 20:12:04 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook	pbk;
	std::string	input;

	std::cout << "Enter command (ADD, SEARCH, EXIT): ";
	while (getline(std::cin, input)) {
		if (input == "ADD"){
			Contact	newC;
			newC.create_contact();
			if (std::cin.eof())
				break ;
			pbk.add_new_contact(newC);
		}
		else if (input == "SEARCH")
			pbk.searchContact();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid command." << std::endl;
		if (std::cin.eof())
			break ;
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
	}
	std::cout << std::endl << "Exiting PhoneBook, thank you for using this program." << std::endl;
	return (0);
}