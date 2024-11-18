/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:16 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 16:23:16 by besalort         ###   ########.fr       */
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
	std::cout << "[ANIMAL]" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "j type: " << j->getType() << " " << std::endl;
	std::cout << "i type: " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n\n[WRONGANIMAL]" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	std::cout <<"wmeta type: " << wmeta->getType() << " " << std::endl;
	std::cout << "wcat type: " << wcat->getType() << " " << std::endl;
	wmeta->makeSound(); //will output the wrong sound!
	wcat->makeSound(); //will output the wrongcat sound!

	delete wmeta;
	delete wcat;
	return 0;
}