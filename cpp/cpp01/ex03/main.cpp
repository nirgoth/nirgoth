/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:06:15 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/13 15:55:46 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	int			num;
	ZombieHorde	*zombie;

	srand(time(0));

	num = -5;
	std::cout << "Zombiehord with " << num << " zombies" << std::endl;
	zombie = new ZombieHorde(num);
	delete zombie;

	num = 0;
	std::cout << "Zombiehord with " << num << " zombies" << std::endl;
	zombie = new ZombieHorde(num);
	delete zombie;

	num = 5;
	std::cout << "Zombiehord with " << num << " zombies" << std::endl;
	zombie = new ZombieHorde(num);
	delete zombie;

	num = 20;
	std::cout << "Zombiehord with " << num << " zombies" << std::endl;
	zombie = new ZombieHorde(num);
	delete zombie;

	return(1);
}
