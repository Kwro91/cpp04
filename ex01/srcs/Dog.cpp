/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:37:20 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 18:24:23 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << GREEN << "Animal " << this->type << " is created" << WHITE << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << RED << "Dog " << this->type << " is destroyed" << WHITE << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(){
	type = dog.type;
	this->brain = new Brain(*dog.brain);
	std::cout << GREEN << "Dog " << this->type << " is created by copy" << WHITE << std::endl;

}

Dog& Dog::operator=(const Dog &dog) {
	if (this != &dog)
	{
		if (brain)
			delete brain;
		type = dog.getType();
		brain = new Brain(*dog.brain);
	}
	std::cout << YELLOW << "Dog " << this->type << " = " << dog.type << WHITE << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Bark Bark Wouf Wouf AOUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}
