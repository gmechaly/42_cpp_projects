/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:40:37 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/17 19:50:35 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contact's constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
	std::cout << "Contact's destructor called" << std::endl;
	return ;
}

void	Contact::set_firstname(){
	while (1) {
		std::cout << "Enter contact's first name : ";
		if (std::getline(std::cin, Contact::_FirstName) && !Contact::_FirstName.empty())
			break ;
		std::cout << "Field cannot be empty" << std::endl;
	}
}

void	Contact::set_lastname(){
	while (1) {
		std::cout << "Enter contact's last name : ";
		if (std::getline(std::cin, Contact::_LastName) && !Contact::_LastName.empty())
			break ;
		std::cout << "Field cannot be empty" << std::endl;
	}
}

void	Contact::set_nickname(){
	while (1) {
		std::cout << "Enter contact's nickname : ";
		if (std::getline(std::cin, Contact::_Nickname) && !Contact::_Nickname.empty())
			break ;
		std::cout << "Field cannot be empty" << std::endl;
	}
}

void	Contact::set_secret(){
	while (1) {
		std::cout << "Enter contact's darkest secret : ";
		if (std::getline(std::cin, Contact::_DarkestSecret) && !Contact::_DarkestSecret.empty())
			break ;
		std::cout << "Field cannot be empty" << std::endl;
	}
}

static int	is_number(const std::string str)
{
	for (int i = 0; str[i]; i++){
		if (!std::isdigit(str[i]))
			return (0);
	}
	return (1);
}

void	Contact::set_num(){
	while (1) {
		std::cout << "Enter contact's phone number : ";
		if (std::getline(std::cin, Contact::_PhoneNumber) && !Contact::_PhoneNumber.empty() && is_number(Contact::_PhoneNumber))
			break ;
		std::cout << "Please enter a valid phone number" << std::endl;
	}
}

void	Contact::create_contact(){
	Contact::set_firstname();
	Contact::set_lastname();
	Contact::set_nickname();
	Contact::set_num();
	Contact::set_secret();
	return ;
}

std::string	Contact::get_firstname() const{
	return (Contact::_FirstName);
}

std::string	Contact::get_lastname() const{
	return (Contact::_LastName);
}

std::string	Contact::get_nickname() const{
	return (Contact::_Nickname);
}

std::string	Contact::get_num() const{
	return (Contact::_PhoneNumber);
}

std::string	Contact::get_secret() const{
	return (Contact::_DarkestSecret);
}

