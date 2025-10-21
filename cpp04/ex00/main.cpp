/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:25:59 by gmechaly          #+#    #+#             */
/*   Updated: 2025/10/21 19:38:00 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {
	std::cout << "========== Animals ==========" << std::endl;
	std::cout << "-------- constructors --------" << std::endl;
	const Animal* animal = new Animal(); 
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\n-------- print types --------" << std::endl;
	std::cout << "Animal type: " << animal->getType() << " " << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;
	std::cout << "Cat type: " << cat->getType() << " " << std::endl;

	std::cout << "\n-------- make sounds --------" << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n-------- cleanup --------" << std::endl;
	delete animal;
	delete dog;
	delete cat;

	std::cout << "\n\n===== Wrong Animals =====" << std::endl;
	std::cout << "\n-------- constructors --------" << std::endl;
	const WrongAnimal* wrongAnimal = new WrongAnimal(); 
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\n-------- print type --------" << std::endl;
	std::cout << "Wrong Animal type: " <<  wrongAnimal->getType() << " " << std::endl;
	std::cout  << "Wrong Cat type: " << wrongCat->getType() << " " << std::endl;

	//wrong class inheritance -> cannot compile
	// const WrongAnimal* error = new Cat(); //not compilable
	// std::cout << error->getType() << " " << std::endl; //not compilable
		
	std::cout << "\n-------- make sounds --------" << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	// error->makeSound();

	std::cout << "\n-------- cleanup --------" << std::endl;
	delete wrongAnimal;
	delete wrongCat;

	return (0); 
}

/*	 MAIN FROM SUBJECT	*/

// int	main() {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;
// 	return (0);
// }