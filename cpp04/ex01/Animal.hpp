/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:16:31 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/31 18:09:20 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Brain;

class Animal {
	public :
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal(void);

		std::string		getType(void) const;
		void			setType(std::string newType);
		virtual Brain	*getBrain(void) const;

		virtual void	makeSound(void) const;

	protected :
		std::string	_type;
};

#endif