/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:36:20 by besalort          #+#    #+#             */
/*   Updated: 2024/08/12 18:15:50 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


class Animal {
	private :

	protected :
		std::string type;

	public :
		Animal();
		Animal(std::string type);
		~Animal();
		Animal(const Animal &animal);
		Animal & operator = (const Animal &animal);

		virtual void makeSound();
};

#endif