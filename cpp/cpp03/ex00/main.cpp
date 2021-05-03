/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:11:04 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/25 20:55:51 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	srand(time(NULL));
	FragTrap x("C3PO");
	
	x.rangedAttack("somedody");
	x.meleeAttack("Unit");
	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(50);
	x.takeDamage(1000);
	x.beRepaired(40);
	x.beRepaired(40);
	x.beRepaired(40);
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");

	return (0);
}
