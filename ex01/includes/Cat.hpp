/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:25:55 by besalort          #+#    #+#             */
/*   Updated: 2024/08/19 15:16:21 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
	private :

	protected :

	public :
		Cat();
		~Cat();
		Cat(const Cat &cat);
		Cat & operator = (const Cat &cat);

		void makeSound() const;
};

#endif