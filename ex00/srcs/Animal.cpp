/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:22 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 16:16:29 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"


Animal::Animal() {
	this->type = "Default";
	std::cout << GREEN << "Animal " << this->type << " is created" << WHITE << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << GREEN << "Animal " << this->type << " is created" << WHITE << std::endl;
}

Animal::~Animal() {
	std::cout << RED << "Animal " << this->type << " is destroyed" << WHITE << std::endl;
}

Animal::Animal(const Animal &animal) {
	type = animal.type;
	std::cout << GREEN << "Animal " << this->type << " is created by copy" << WHITE << std::endl;
}

Animal& Animal::operator=(const Animal &animal){
	std::cout << YELLOW << "Animal " << this->type << " = " << animal.type << WHITE << std::endl;
	type = animal.type;
	return (*this);
}

void Animal::makeSound() const {
	std::cout << "[Animal makeSound default]" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}
