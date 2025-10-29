/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:51:36 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/22 20:00:10 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include "Animal.hpp"

class Brain {
	public :
		Brain(void);
		Brain(const Brain &other);
		Brain &operator=(const Brain &rhs);
		~Brain(void);

		std::string	getIdeas(int i) const;
		void		setIdea(int i, const std::string &idea);
		
	private :
		std::string	_ideas[100];
};

#endif