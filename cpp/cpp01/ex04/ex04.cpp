/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:35:35 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 14:40:54 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string &strReference = str;
	std::string *strPointer = &str;
	
	std::cout << "Print " << "\033[33m" << "reference " << "\033[0m" << "string: " << "\033[31m" << strReference << "\033[0m" << std::endl;
	std::cout << "Print " << "\033[33m" << "pointer " << "\033[0m" << "string: " << "\033[31m" << *strPointer << "\033[0m" << std::endl;
	
	return (0);
}
