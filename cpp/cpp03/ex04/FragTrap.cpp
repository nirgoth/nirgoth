#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	srand(time(NULL));
	this->_hit_points = 100;
	std::cout << "FRAG <" << this->_name << "> created" << std::endl;
	return; 
}

FragTrap::FragTrap(void) : ClapTrap(100, 100, 100, 100, 1, "", 30, 20, 5)
{
	srand(time(NULL));
	std::cout << "FRAG <" << this->_name << "> created" << std::endl;
	return; 
}

FragTrap::~FragTrap(void)
{
	std::cout << "FRAG <" << this->_name << "> died" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &el){
	if (this != &el)
		ClapTrap::operator=(el);
	return *this;
}

FragTrap::FragTrap(FragTrap const &el) : ClapTrap(el)
{
	std::cout << "<" << el.getName() << "> created" << std::endl;
}

void setWpn(wpn &wpn, std::string weapon, int dmg)
{
	wpn.weapon = weapon;
	wpn.dmg = dmg;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energy_point < 25)
	{
		std::cout << "<" << this->_name << "> tried to use random weapon, but hasn't enought energy <" << this->_energy_point << ">" << std::endl;
		return;
	}
	wpn wpn[5];
	int choice;
	setWpn(wpn[0], "Banana machine", 5);
	setWpn(wpn[1], "Duck", 10);
	setWpn(wpn[2], "Apple", 15);
	setWpn(wpn[3], "Ponycorn", 20);
	setWpn(wpn[4], "Atomic bomb", 1000);
	choice = rand() % 5;
	std::cout << "<" << this->_name << "> attacks <" << target << "> with " << wpn[choice].weapon << ", causing <" << wpn[choice].dmg << "> points of damage!" << std::endl;
	this->_energy_point -= 25;
}
