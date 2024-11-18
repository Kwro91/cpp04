/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:47:19 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 16:19:12 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "WrongDefault";
	std::cout << GREEN << "WrongAnimal " << this->type << " is created" << WHITE << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "WrongAnimal " << this->type << " is destroyed" << WHITE << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wanimal) {
	type = wanimal.type;
	std::cout << GREEN << "WrongAnimal " << this->type << " is created by copy\033[0m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wanimal){
	std::cout << YELLOW << "WrongAnimal " << this->type << " = " << wanimal.type << WHITE << std::endl;
	type = wanimal.type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "Pikachu ~UwU~" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}
