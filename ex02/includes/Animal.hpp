/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:20 by besalort          #+#    #+#             */
/*   Updated: 2024/08/26 17:30:53 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Brain.hpp"

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal {
	private :

	protected :
		std::string type;

	public :
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &animal);
		Animal & operator = (const Animal &animal);

		virtual void makeSound() const = 0; // = 0; here is a way to make this function pure virtual. If a class have at least one pure virtual function, it make a class abstract.
		std::string getType() const;        // An abstract class cannot be instanciate by itself. The pure virtual function have to be override.
};

#endif