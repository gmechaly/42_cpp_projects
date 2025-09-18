/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:07:15 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/18 15:21:08 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	set_name(std::string name);
	
	private:
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif