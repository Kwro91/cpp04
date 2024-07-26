/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:37:20 by besalort          #+#    #+#             */
/*   Updated: 2024/07/26 15:02:52 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "\033[1;32m" << "Animal " << this->type << " is created\033[0m" << std::endl;
}

Dog::~Dog() {
	std::cout << "\033[1;31m" << "Animal " << this->type << " is destroyed\033[0m" << std::endl;
}