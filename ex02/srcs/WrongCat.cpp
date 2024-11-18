/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:29:27 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 16:19:12 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << GREEN << "WrongAnimal " << this->type << " is created" << WHITE << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << RED << "WrongCat " << this->type << " is destroyed" << WHITE << std::endl;
}

WrongCat::WrongCat(const WrongCat &wcat) : WrongAnimal(){
	type = wcat.type;
	std::cout << GREEN << "WrongCat " << this->type << " is created by copy\033[0m" << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat &wcat) {
	std::cout << YELLOW << "WrongCat " << this->type << " = " << wcat.type << WHITE << std::endl;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Meow !" << std::endl;
}
