/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:37:20 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 16:17:36 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << GREEN << "Animal " << this->type << " is created" << WHITE << std::endl;
}

Dog::~Dog() {
	std::cout << RED << "Dog " << this->type << " is destroyed" << WHITE << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(){
	type = dog.type;
	std::cout << GREEN << "Dog " << this->type << " is created by copy" << WHITE << std::endl;

}

Dog& Dog::operator=(const Dog &dog) {
	std::cout << YELLOW << "Dog " << this->type << " = " << dog.type << WHITE << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Bark Bark Wouf Wouf AOUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}
