/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:12:27 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/25 20:12:28 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "Ninja <" << this->_name << "> created" << std::endl;
	return; 
}

NinjaTrap::NinjaTrap(void) : ClapTrap(60, 60, 120, 120, 1, "", 60, 5, 0)
{
	srand(time(NULL));
	std::cout << "Ninja <" << this->_name << "> created" << std::endl;
	return; 
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Ninja <" << this->_name << "> died" << std::endl;
	return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &el){
	if (this != &el)
		ClapTrap::operator=(el);
	return *this;
}

NinjaTrap::NinjaTrap(NinjaTrap const &el) : ClapTrap(el)
{
	std::cout << "<" << el.getName() << "> created" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target){
	std::cout << "<" << this->_name << "> attacs by special Clap weapon <" << target.getName() << ">" << std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap const &target) {
	std::cout << "<" << this->_name << "> attacs by special Frag weapon <" << target.getName() << ">" << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap const &target) {
	std::cout << "<" << this->_name << "> attacs by special Ninja weapon <" << target.getName() << ">" << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap const &target) {
	std::cout << "<" << this->_name << "> attacs by special Scav weapon <" << target.getName() << ">" << std::endl;
}
