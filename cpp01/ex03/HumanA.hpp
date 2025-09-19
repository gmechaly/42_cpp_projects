/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:30:20 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/19 16:35:18 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name_to_set, Weapon &weaponA);
		~HumanA(void);

		void	attack();
		void	set_name(std::string name_to_set);

	private:
		std::string	_name;
		Weapon		&_WeaponA;
};

#endif