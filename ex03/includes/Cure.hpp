/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:32:48 by besalort          #+#    #+#             */
/*   Updated: 2024/09/02 15:34:42 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef CURE_HPP
#define CURE_HPP

class Cure : AMateria {
	protected :
	
	public :
		Cure();
		~Cure();
		Cure(const Cure &cure);
		Cure	&operator=(const Cure &cure);	
};

#endif
