/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:22 by besalort          #+#    #+#             */
/*   Updated: 2024/07/26 14:23:57 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"


Animal::Animal() {
	this->type = "Default";
	std::cout << "\033[1;32m" << "Animal " << this->type << " is created\033[0m" << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "\033[1;32m" << "Animal " << this->type << " is created\033[0m" << std::endl;
}

Animal::~Animal() {
	std::cout << "\033[1;31m" << "Animal " << this->type << " is destroyed\033[0m" << std::endl;
}

Animal::Animal(const Animal &animal) {
	type = animal.type;
	std::cout << "\033[1;32m" << "Animal " << this->type << " is created by copy\033[0m" << std::endl;
}

Animal& Animal::operator=(const Animal &animal){
	std::cout << "\033[1;33m" << "Animal " << this->type << " = " << animal.type << "\033[0m" << std::endl;
	type = animal.type;
	return (*this);
}