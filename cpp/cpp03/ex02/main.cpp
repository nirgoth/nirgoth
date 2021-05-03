/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:11:48 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/25 20:14:34 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap x("R2D2");
	ScavTrap y("Cerberus");

	FragTrap x_copy(x);
	ScavTrap y_eq;

	y_eq = y;
	
	std::cout << std::endl;
	x.rangedAttack("somedody");
	x.meleeAttack("Unit");
	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(50);
	x.beRepaired(40);
	x.beRepaired(40);
	x.beRepaired(40);
	x.vaulthunter_dot_exe("randomUnit");

	std::cout << std::endl;
	y.rangedAttack("somedody");
	y.meleeAttack("Unit");
	y.takeDamage(50);
	y.takeDamage(50);
	y.takeDamage(50);
	y.beRepaired(40);
	y.beRepaired(40);
	y.beRepaired(40);
	y.challengeNewcomer(x);

	std::cout << std::endl;
	x_copy.rangedAttack("somedody");
	x_copy.meleeAttack("Unit");
	x_copy.takeDamage(50);
	x_copy.takeDamage(50);
	x_copy.takeDamage(50);
	x_copy.beRepaired(40);
	x_copy.beRepaired(40);
	x_copy.beRepaired(40);
	x_copy.vaulthunter_dot_exe("randomUnit");

	std::cout << std::endl;
	y_eq.rangedAttack("somedody");
	y_eq.meleeAttack("Unit");
	y_eq.takeDamage(50);
	y_eq.takeDamage(50);
	y_eq.takeDamage(50);
	y_eq.beRepaired(40);
	y_eq.beRepaired(40);
	y_eq.beRepaired(40);
	y_eq.challengeNewcomer(x);
	std::cout << std::endl;

	return (0);
}
