/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:44:32 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:44:33 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {}

Brain::~Brain(void) {}

std::string Brain::identify()
{
	std::stringstream ss;

	ss << this;
	return ss.str();
}
