/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:55:07 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/27 19:03:31 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, "Default domestic animal idea");
	return ;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other.getIdeas(i);
	std::cout << "Brain copy constructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdeas(i);
	}
	std::cout << "Brain assignation constructor called" << std::endl;
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

std::string	Brain::getIdeas(int i) const {
	return (this->_ideas[i]);
}

void	Brain::setIdea(int i, const std::string &idea) {
	this->_ideas[i] = idea;
	return ;
}