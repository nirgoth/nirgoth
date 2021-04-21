/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:20:35 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:33:07 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int Number)
{
	if (Number < 1)
	{
		std::cout << "\033[31m" << "Invalid number of zombies, it should be strictly greater the Zero" << "\033[0m" << std::endl;
		return;
	}
	int i = 0;
	Zombie *zombies = new Zombie[Number];
	while (i++ < Number)
	{
		zombies[i].setNameType(this->zombieName(), "walking dead zombie");
		zombies[i].announce();
	}
	this->_zombies = zombies;
}

ZombieHorde::~ZombieHorde(void)
{
	if (!this->_zombies)
		return;
	std::cout << "Horde battle royle - every zombie will die" << std::endl;
	delete [] this->_zombies;
	std::cout << "there is no living dead anymore" << std::endl;
}

std::string ZombieHorde::zombieName(void)
{
	Zombie				*newZombie;
	std::stringstream	string;
	const int i = rand() % 10;
	const char * Names[10] = { "Bob", "Joe", "Manson", "Karl", "Donald", \
	"Ivan", "Charlie", "Hebdo", "Spok", "Joda"};
	string << Names[i];
	return (string.str());
}
