/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:20:46 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:33:44 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	int			number;
	ZombieHorde	*zombie;

	srand(time(0));

	number = 0;
	std::cout << "Horde with " << number << " zombies" << std::endl;
	zombie = new ZombieHorde(number);
	delete zombie;

	number = 1;
	std::cout << "Horde with " << number << " zomby" << std::endl;
	zombie = new ZombieHorde(number);
	delete zombie;

	number = 7;
	std::cout << "Horde with " << number << " zombies" << std::endl;
	zombie = new ZombieHorde(number);
	delete zombie;

	return(1);
}
