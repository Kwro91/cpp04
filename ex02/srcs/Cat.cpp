/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:25:36 by besalort          #+#    #+#             */
/*   Updated: 2024/08/22 17:27:11 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "\033[1;32m" << "Animal " << this->type << " is created\033[0m" << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << "\033[1;31m" << "Cat " << this->type << " is destroyed\033[0m" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(){
	type = cat.type;
	brain = cat.brain;
	std::cout << "\033[1;32m" << "Cat " << this->type << " is created by copy\033[0m" << std::endl;

}

Cat& Cat::operator=(const Cat &cat) {
	std::cout << "\033[1;33m" << "Cat " << this->type << " = " << cat.type << "\033[0m" << std::endl;
	brain = cat.brain;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow !" << std::endl;
}