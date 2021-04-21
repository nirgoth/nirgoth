/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:18:52 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 16:21:04 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *el = new Zombie(name, this->_type);
	return el;
}
