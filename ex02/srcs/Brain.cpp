/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:12:58 by besalort          #+#    #+#             */
/*   Updated: 2024/08/22 17:17:20 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "\033[1;32m" << "Brain is created\033[0m" << std::endl;
}

Brain::~Brain() {
	std::cout << "\033[1;31m" << "Brain is destroyed\033[0m" << std::endl;
}

Brain::Brain(const Brain &x) {
	std::cout << "\033[1;32m" << "Brain is created by copy\033[0m" << std::endl;
	(void)x;
}

Brain	&Brain::operator=(const Brain &x) {
	std::cout << "\033[1;33m" << "Brain  = Brain copy\033[0m" << std::endl;
	(void)x;
	return (*this);
}