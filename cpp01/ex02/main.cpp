/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:26:27 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/18 16:27:11 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CPP
# define BRAIB_CPP

# include <iostream>
# include <string>
# include <iomanip>

#endif

int	main(void) {
	std::string	str_var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str_var;
	std::string	&stringREF = str_var;

	std::cout << "str_var is at this memory address: " << &str_var << std::endl;
	std::cout << "stringPTR is holding this memory address: " << stringPTR << std::endl;
	std::cout << "stringREF is holding this memory address: " << &stringREF << std::endl;

	std::cout << "str_var value: " << str_var << std::endl;
	std::cout << "stringPTR points to this value: " << *stringPTR << std::endl;
	std::cout << "stringREF points to this value: " << stringREF << std::endl;
}