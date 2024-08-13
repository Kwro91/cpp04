/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:16 by besalort          #+#    #+#             */
/*   Updated: 2024/08/13 14:56:53 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"

void	hearAnimal(Animal& x) {
	x.makeSound();	
}

int main () {
	Animal	first("Chieng");
	Animal	second = first;
	Animal	third("Cat");
	third = first;

	Dog		doggo;
	Cat		yuumi;
	hearAnimal(first);
	hearAnimal(doggo);
	hearAnimal(yuumi);
}