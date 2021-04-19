/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:06:15 by rbeach            #+#    #+#             */
/*   Updated: 2021/04/19 18:08:18 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie *randomChump(ZombieEvent& party)
{
	Zombie				*newZombie;
	std::stringstream	ss;

	for (int i = 0; i < 10; i++)
	{
		ss << (char)(std::rand() % 26 + 65);
	}
	newZombie = party.newZombie(ss.str());
	newZombie->announce();
	return newZombie;
}

int main(void)
{
	ZombieEvent	party = ZombieEvent();
	Zombie		*zombieEl;

	srand(time(0));
	
	zombieEl = randomChump(party);
	delete zombieEl;
	
	party.setZombieType("brainEater");
	zombieEl = randomChump(party);
	delete zombieEl;
	
	party.setZombieType("heartEater");
	zombieEl = randomChump(party);
	delete zombieEl;
	
	party.setZombieType("armEater");
	zombieEl = randomChump(party);
	delete zombieEl;
	
	return (0);
}
