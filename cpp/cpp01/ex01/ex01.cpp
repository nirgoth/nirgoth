/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:47:44 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/19 16:55:53 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string *panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

/*
void	memoryLeak()
{
	std::string panther("String panther");

	std::cout << panther << std::endl;
}
*/