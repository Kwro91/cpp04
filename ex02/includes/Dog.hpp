/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:33:08 by besalort          #+#    #+#             */
/*   Updated: 2024/08/22 17:08:23 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
	private :
		Brain *brain;

	protected :

	public :
		Dog();
		~Dog();
		Dog(const Dog &dog);
		Dog & operator = (const Dog &dog);

		void makeSound() const;
};

#endif