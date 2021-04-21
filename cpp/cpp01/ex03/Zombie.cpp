/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:20:55 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 16:20:32 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) 
{
}

Zombie::~Zombie(void) 
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> died cause of abscence of food" << std::endl;
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
