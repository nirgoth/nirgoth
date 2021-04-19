/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 16:39:27 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/19 16:39:29 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string pony_name) : _pony_name(pony_name)
{
	std::cout << "Pony " << _pony_name << " was init" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << _pony_name << " has gone" << std::endl;
}

void Pony::action1(void)
{
	std::cout << _pony_name << " is doing some ponny's stuff" << std::endl;
}

void Pony::action2(void)
{
	std::cout << _pony_name << " stop doing some ponny's stuff" << std::endl;
}