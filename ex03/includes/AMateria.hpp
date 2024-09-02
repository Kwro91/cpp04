/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:35:29 by besalort          #+#    #+#             */
/*   Updated: 2024/09/02 17:05:36 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"
#include "ICharacter.hpp"

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class AMateria {
	protected :
		std::string type;

	public :
		AMateria();
		AMateria(const AMateria &type);
		AMateria &operator=(const AMateria &type);
		virtual ~AMateria(); // We make the destructor virtual to avoid problems if we try to delete AMateria *x = new Ice(); (for example).
		// For more details, please refer to readme
		AMateria(std::string const & type);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		std::string const &getType() const;

		
};

#endif