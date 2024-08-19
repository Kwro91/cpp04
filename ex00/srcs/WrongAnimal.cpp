/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:47:19 by besalort          #+#    #+#             */
/*   Updated: 2024/08/19 15:26:06 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "WrongDefault";
	std::cout << "\033[1;32m" << "WrongAnimal " << this->type << " is created\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "\033[1;31m" << "WrongAnimal " << this->type << " is destroyed\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wanimal) {
	type = wanimal.type;
	std::cout << "\033[1;32m" << "WrongAnimal " << this->type << " is created by copy\033[0m" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wanimal){
	std::cout << "\033[1;33m" << "WrongAnimal " << this->type << " = " << wanimal.type << "\033[0m" << std::endl;
	type = wanimal.type;
	return (*this);
}

void	WrongAnimal::makeSound() const {
	std::cout << "Pikachu ~UwU~" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}
