/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:59 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/29 15:56:52 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {
	std::cout << "========== Animals ==========" << std::endl;
	std::cout << "-------- constructors --------" << std::endl;
	// Animal	error;
	// Animal*	error2 = new Animal(); // Does not compile: class is abstract !
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n-------- print types --------" << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;
	std::cout << "Cat type: " << cat->getType() << " " << std::endl;

	std::cout << "\n-------- make sounds --------" << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n-------- cleanup --------" << std::endl;
	delete dog;
	delete cat;

	std::cout << "\n\n===== Wrong Animals =====" << std::endl;
	std::cout << "\n-------- constructors --------" << std::endl;
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\n-------- print type --------" << std::endl;
	std::cout  << "Wrong Cat type: " << wrongCat->getType() << " " << std::endl;
		
	std::cout << "\n-------- make sounds --------" << std::endl;
	wrongCat->makeSound();

	std::cout << "\n-------- cleanup --------" << std::endl;
	delete wrongCat;

	return (0); 
}
