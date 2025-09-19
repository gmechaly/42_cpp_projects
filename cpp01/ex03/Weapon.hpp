/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:29:45 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/19 17:24:45 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
	public:
		Weapon(std::string weapon_type);
		~Weapon(void);

		const std::string	&getType(void) const;

		void	setType(std::string type_to_set);

	private:
		std::string	_type;
};

#endif