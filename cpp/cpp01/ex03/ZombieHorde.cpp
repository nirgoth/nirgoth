/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:28:19 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/13 15:52:53 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	if (N < 1)
	{
		std::cout << "Wrong int" << std::endl;
		return;
	}
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].setNameType(this->zombieName(), "brainEater");
		zombies[i].announce();
	}
	this->_zombies = zombies;
}

ZombieHorde::~ZombieHorde(void)
{
	if (!this->_zombies)
		return;
	std::cout << "Start of ZombieHorde destroing" << std::endl;
	delete [] this->_zombies;
	std::cout << "Finish of ZombieHorde destroing" << std::endl;
}

std::string ZombieHorde::zombieName(void)
{
	std::stringstream ss;

	for (int i = 0; i < 4; i++)
		ss << (char)(std::rand() % 26 + 65);
	return (ss.str());
}
