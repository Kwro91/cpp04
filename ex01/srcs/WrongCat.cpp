/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:29:27 by besalort          #+#    #+#             */
/*   Updated: 2024/08/19 14:43:33 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << "\033[1;32m" << "WrongAnimal " << this->type << " is created\033[0m" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "\033[1;31m" << "WrongCat " << this->type << " is destroyed\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wcat) : WrongAnimal(){
	type = wcat.type;
	std::cout << "\033[1;32m" << "WrongCat " << this->type << " is created by copy\033[0m" << std::endl;

}

WrongCat& WrongCat::operator=(const WrongCat &wcat) {
	std::cout << "\033[1;33m" << "WrongCat " << this->type << " = " << wcat.type << "\033[0m" << std::endl;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Meow !" << std::endl;
}
