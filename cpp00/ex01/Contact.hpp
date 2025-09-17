/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 19:44:21 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/11 20:12:46 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cctype>

class Contact {
	public:
		Contact(void);
		~Contact(void);

		void	set_firstname(void);
		void	set_lastname(void);
		void	set_nickname(void);
		void	set_num(void);
		void	set_secret(void);

		std::string	get_firstname(void) const;
		std::string	get_lastname(void) const;
		std::string	get_nickname(void) const;
		std::string	get_num(void) const;
		std::string	get_secret(void) const;

		void	create_contact(void);
		
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string _Nickname;
		std::string _PhoneNumber;
		std::string _DarkestSecret;
};

#endif