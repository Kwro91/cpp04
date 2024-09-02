/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:41:58 by besalort          #+#    #+#             */
/*   Updated: 2024/09/02 16:25:29 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#ifndef ICE_HPP
#define ICE_HPP

class Ice : AMateria {
	protected :
	
	public :
		Ice();
		~Ice();
		Ice(const Ice &ice);
		Ice	&operator=(const Ice &ice);

		AMateria *clone() const;
};

#endif
