/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:26:11 by besalort          #+#    #+#             */
/*   Updated: 2024/08/19 14:37:36 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
	private :

	protected :

	public :
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &wcat);
		WrongCat & operator = (const WrongCat &wcat);

		void makeSound() const;
};

#endif