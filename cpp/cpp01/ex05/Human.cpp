/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:44:19 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:44:20 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

std::string Human::identify()
{
	return this->_brain.identify();
}

Brain& Human::getBrain()
{
	return this->_brain;
}


