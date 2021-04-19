#include "FragTrap.hpp"

int main(void)
{
	FragTrap x("R2D2");

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

	return (0);
}
