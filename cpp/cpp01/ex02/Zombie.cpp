/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:18:40 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:18:41 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type): _name(name), _type(type) {}

Zombie::~Zombie(void) 
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> died cause of abscence of food" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braaaaaaaiiiiiiins" << std::endl;
}
