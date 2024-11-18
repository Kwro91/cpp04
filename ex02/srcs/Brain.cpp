/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:12:58 by besalort          #+#    #+#             */
/*   Updated: 2024/11/18 16:18:23 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << GREEN << "Brain is created" << WHITE << std::endl;
}

Brain::~Brain() {
	std::cout << RED << "Brain is destroyed" << WHITE << std::endl;
}

Brain::Brain(const Brain &x) {
	std::cout << GREEN << "Brain is created by copy\033[0m" << std::endl;
	(void)x;
}

Brain	&Brain::operator=(const Brain &x) {
	std::cout << YELLOW << "Brain  = Brain copy\033[0m" << std::endl;
	(void)x;
	return (*this);
}