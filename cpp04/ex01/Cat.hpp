/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:19:35 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/31 17:57:52 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"

class Cat : public Animal{
	public :
		Cat(void);
		Cat(std::string typeCat);
		Cat(const Cat &other);
		Cat &operator=(const Cat &rhs);
		~Cat(void);

		Brain	*getBrain(void) const;

		void	makeSound(void) const;

	private :
		Brain	*CatBrain;
};

#endif