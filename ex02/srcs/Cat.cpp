/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:25:36 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 18:31:00 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << GREEN << "Animal " << this->type << " is created" << WHITE << std::endl;
}

Cat::~Cat() {
	delete brain;
	std::cout << RED << "Cat " << this->type << " is destroyed" << WHITE << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(){
	type = cat.type;
	this->brain = new Brain(*cat.brain);
	std::cout << GREEN << "Cat " << this->type << " is created by copy\033[0m" << std::endl;

}

Cat& Cat::operator=(const Cat &cat) {
	if (this != &cat)
	{
		if (brain)
			delete brain;
		type = cat.getType();
		brain = new Brain(*cat.brain);
	};
	std::cout << YELLOW << "Cat " << this->type << " = " << cat.type << WHITE << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow !" << std::endl;
}
