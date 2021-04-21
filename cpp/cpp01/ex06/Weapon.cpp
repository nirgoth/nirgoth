/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:39:27 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 16:19:18 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){}

Weapon::~Weapon(void)
{
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string	Weapon::getType(void)
{
	return this->_type;
}
