/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:35:32 by besalort          #+#    #+#             */
/*   Updated: 2024/09/02 16:55:27 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() {
	this->type = "Default";
}

AMateria::AMateria(const AMateria &materia) {
	this->type = type;
}

AMateria::AMateria &operator=(const AMateria &materia) {
	std::cout << "AMateria assignment operator called" << std::endl;

	if (this != &materia)
		this->type = materia.type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMaeteria::AMateria(std::string const &materia) {
	this->type = materia.type;
}