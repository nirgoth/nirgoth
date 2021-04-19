#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap x("GOD");
	FragTrap a("R2D2");
	ScavTrap b("Cerberus");
	NinjaTrap c("Karatist");
	ClapTrap d("Claper");
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
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");
	x.vaulthunter_dot_exe("randomUnit");


	x.ninjaShoebox(a);
	x.ninjaShoebox(b);
	x.ninjaShoebox(c);
	x.ninjaShoebox(d);

	std::cout << std::endl;

	return (0);
}
