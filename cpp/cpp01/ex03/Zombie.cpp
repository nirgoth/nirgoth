/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 13:36:45 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/12 10:39:11 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::~Zombie(void) 
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> died" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braaaaaaaiiiiiiins" << std::endl;
}

void Zombie::setNameType(std::string name, std::string type) 
{
	this->_name = name;
	this->_type = type;
}
