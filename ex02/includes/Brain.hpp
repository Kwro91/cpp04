/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:06:34 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 18:29:16 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Color.hpp"

class Brain {
	private :
		std::string ideas[100];
	
	protected :


	public :
		Brain();
		~Brain();
		Brain(const Brain &x);
		Brain &operator=(const Brain&x);
	
	
};

#endif