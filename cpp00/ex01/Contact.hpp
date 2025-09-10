/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 17:16:24 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/10 16:28:51 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);

	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string DarkestSecret;
};

#endif