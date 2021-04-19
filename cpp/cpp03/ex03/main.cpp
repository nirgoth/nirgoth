#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	FragTrap x("R2D2");
	ScavTrap y("Cerberus");
	NinjaTrap z("Karatist");
	ClapTrap a;

	std::cout << std::endl;
	
	z.ninjaShoebox(a);
	z.ninjaShoebox(x);
	z.ninjaShoebox(y);
	z.ninjaShoebox(z);

	std::cout << std::endl;

	return (0);
}
