/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:20 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 16:11:10 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Color.hpp"

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

		virtual void makeSound() const ;
		std::string getType() const;
};

#endif