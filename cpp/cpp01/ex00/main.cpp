/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:39:00 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/19 16:39:04 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony	*animal = new Pony("OnTheHeap");

	animal->action1();
	animal->action2();
	delete animal;
}

void ponyOnTheStack(void)
{
	Pony	animal = Pony("OnTheStack");

	animal.action1();
	animal.action2();
}

int main(void)
{
	std::cout << "\033[32m" << "PonyOnTheHeap visualization" << "\033[0m" << std::endl;
	ponyOnTheHeap();
	std::cout << "\033[31m" << "PonyOnTheHeap is done" << "\033[0m" << std::endl;
	std::cout << '\n' << "\033[32m" << "PonyOnTheStack visualization" << "\033[0m" << std::endl;
	ponyOnTheStack();
	std::cout << "\033[31m" << "PonyOnTheStack is done" << "\033[0m" << std::endl;
	return (0);
}
