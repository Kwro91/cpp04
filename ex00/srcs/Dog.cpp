/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:37:20 by besalort          #+#    #+#             */
/*   Updated: 2024/08/12 18:22:39 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "\033[1;32m" << "Animal " << this->type << " is created\033[0m" << std::endl;
}

Dog::~Dog() {
	std::cout << "\033[1;31m" << "Dog " << this->type << " is destroyed\033[0m" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(){
	type = dog.type;
	std::cout << "\033[1;32m" << "Dog " << this->type << " is created by copy\033[0m" << std::endl;

}

Dog& Dog::operator=(const Dog &dog) {
	std::cout << "\033[1;33m" << "Dog " << this->type << " = " << dog.type << "\033[0m" << std::endl;
	return (*this);
}

void Dog::makeSound() {
	std::cout << "Bark Bark Wouf Wouf AOUUUUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}
