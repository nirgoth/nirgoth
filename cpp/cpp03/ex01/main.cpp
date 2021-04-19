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
