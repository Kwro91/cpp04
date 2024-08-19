/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:49:06 by besalort          #+#    #+#             */
/*   Updated: 2024/08/19 14:37:27 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


class WrongAnimal {
	private :

	protected :
		std::string type;

	public :
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &wanimal);
		WrongAnimal & operator = (const WrongAnimal &wanimal);

		void makeSound() const;
		std::string getType() const;
};


#endif