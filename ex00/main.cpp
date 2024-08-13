/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:16 by besalort          #+#    #+#             */
/*   Updated: 2024/08/12 18:23:11 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"

void	hearAnimal(Animal& x) {
	x.makeSound();	
}

int main () {
	Animal	first("Chieng");
	Animal	second = first;
	Animal	third("Cat");
	third = first;

	Dog		doggy;
	hearAnimal(first);
	hearAnimal(doggy);
}