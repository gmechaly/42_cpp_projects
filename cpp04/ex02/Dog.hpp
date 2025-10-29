/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:35:04 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/27 20:34:24 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Brain.hpp"

class Dog : public Animal{
	public :
		Dog(void);
		Dog(std::string typeDog);
		Dog(const Dog &other);
		Dog &operator=(const Dog &rhs);
		~Dog(void);

		void	makeSound(void) const;

	private :
		Brain	*DogBrain;
};

#endif