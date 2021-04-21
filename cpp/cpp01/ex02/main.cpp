/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:18:33 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:18:35 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

Zombie *randomChump(ZombieEvent& party)
{
	Zombie				*newZombie;
	std::stringstream	string;
	const int i = rand() % 10;
	const char * Names[10] = { "Bob", "Joe", "Manson", "Karl", "Donald", \
	"Ivan", "Charlie", "Hebdo", "Spok", "Joda"};
	string << Names[i];
	newZombie = party.newZombie(string.str());
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
	
	party.setZombieType("walking dead zombie");
	zombieEl = randomChump(party);
	delete zombieEl;
	
	party.setZombieType("zombieland zombie");
	zombieEl = randomChump(party);
	delete zombieEl;
	
	party.setZombieType("world war z zombie");
	zombieEl = randomChump(party);
	delete zombieEl;
	
	return (0);
}
