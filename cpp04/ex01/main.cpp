/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:59 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/31 18:10:25 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {
	std::cout << "-------- constructors --------" << std::endl;
	Animal	*animals[4];
	
	for (int i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n-------- brain verif --------" << std::endl;
	for (int i = 0; i < 4; i++) {
		animals[i]->getBrain()->setIdea(i, "mmmpghhh fooood...");
		std::cout << "idea " << i << " set for animal [" << i << "] : " << animals[i]->getBrain()->getIdeas(i) << std::endl;
	}

	std::cout << "\n-------- print types --------" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "Type " << i << ": " << animals[i]->getType() << " " << std::endl;

	std::cout << "\n-------- make sounds --------" << std::endl;
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	std::cout << "\n-------- cleanup --------" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animals[i];

	return (0); 
}


// int	main() {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << "--- DOG PART ---" << std::endl;
// 	std::cout << "Dog type : " << j->getType() << std::endl;
// 	j->makeSound();
// 	std::cout << std::endl;
	
// 	std::cout << "--- CAT PART ---" << std::endl;
// 	std::cout << "Cat type : " << i->getType() << std::endl;
// 	i->makeSound();
// 	std::cout << std::endl;
	
// 	delete j;
// 	delete i;
// 	return (0);
// }