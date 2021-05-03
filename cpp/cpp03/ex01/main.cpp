/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:11:19 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/25 20:14:26 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap x("R2D2");
	ScavTrap y("Cerberus");

	x.rangedAttack("somedody");
	x.meleeAttack("Unit");
	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(50);
	x.beRepaired(40);
	x.beRepaired(40);
	x.beRepaired(40);
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");

	y.rangedAttack("somedody");
	y.meleeAttack("Unit");
	y.takeDamage(50);
	y.takeDamage(50);
	y.takeDamage(50);
	y.beRepaired(40);
	y.beRepaired(40);
	y.beRepaired(40);
	y.challengeNewcomer(x);
	y.challengeNewcomer(x);
	y.challengeNewcomer(x);
	y.challengeNewcomer(x);
	y.challengeNewcomer(x);

	return (0);
}
