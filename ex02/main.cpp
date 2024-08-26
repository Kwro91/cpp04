/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:16 by besalort          #+#    #+#             */
/*   Updated: 2024/08/26 17:34:06 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"
#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

// void	hearAnimal(Animal& x) {
// 	x.makeSound();	
// }

// int main () {
// 	Animal	first("Chieng");
// 	Animal	second = first;
// 	Animal	third("Cat");
// 	third = first;

// 	Dog		doggo;
// 	Cat		yuumi;
// 	hearAnimal(first);
// 	hearAnimal(doggo);
// 	hearAnimal(yuumi);
// }

int main()
{
	// Animal notInstanciable;
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	
	Dog doggo;
	Dog cpy = doggo;
	
	std::cout << "[ANIMAL]" << std::endl;
	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << "j type: " << j->getType() << " " << std::endl;
	// std::cout << "i type: " << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete j;
	// delete i;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}
	return 0;
}