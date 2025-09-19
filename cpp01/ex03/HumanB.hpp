/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:30:40 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/19 20:02:58 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name_to_set);
		~HumanB(void);

		void	attack();
		void	set_name(std::string name_to_set);
		void	setWeapon(Weapon &weaponB);

	private:
		std::string	_name;
		Weapon		*_WeaponB;
};

#endif