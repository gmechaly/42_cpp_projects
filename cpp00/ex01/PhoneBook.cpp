/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:26:58 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/17 19:50:35 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _i(0){
	std::cout << "PhoneBook's constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(){
	std::cout << "PhoneBook's destructor called" << std::endl;
	return ;
}

void	PhoneBook::add_new_contact(Contact new_contact)
{
	_array[_i % 8] = new_contact;
	_i++;
}

std::string	PhoneBook::truncName(const std::string& str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	PhoneBook::displayContacts(void) const {
	int	count;

	if (_i == 0) {
		std::cout << "There is currently no contact in your phonebook" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|"
		 << std::setw(10) << "First Name" << "|"	
		 << std::setw(10) << "Last Name" << "|"
		 << std::setw(10) << "NickName" << "|"
		 << std::endl;
	count = 8;
	if (_i < 8)
		count = _i;
	for (int i = 0; i < count; i++) {
		std::cout << std::setw(10) << i << "|"
			 << std::setw(10) << truncName(_array[i].get_firstname()) << "|"
			 << std::setw(10) << truncName(_array[i].get_lastname()) << "|"
			 << std::setw(10) << truncName(_array[i].get_nickname()) << "|" << std::endl;
	}
}

void	PhoneBook::displayOneContact(int i) const {
	std::cout << "First name: " << _array[i].get_firstname() << std::endl;
	std::cout << "Last name: " << _array[i].get_lastname() << std::endl;
	std::cout << "Nickname: " << _array[i].get_nickname() << std::endl;
	std::cout << "Phone number: " << _array[i].get_num() << std::endl;
	std::cout << "Darkest secret: " << _array[i].get_secret() << std::endl;
}

void	PhoneBook::searchContact(void) {
	int			i;
	std::string	input;

	displayContacts();
	if (_i == 0) 
		return ;
	while (1) {
		std::cout << "Enter index to see: " << std::endl;
		if (getline(std::cin, input)) {
			std::stringstream ss(input);
			if (!(ss >> i) || i < 0 || i >= _i || i >= 8)
				std::cout << "Please enter a valid index." << std::endl;
			else
				break ;
		}
	}
	displayOneContact(i);
}
