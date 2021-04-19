#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "SCAV <" << this->_name << "> created" << std::endl;
	return; 
}

ScavTrap::ScavTrap(void) : ClapTrap(100, 100, 50, 50, 1, "", 20, 15, 3)
{
	srand(time(NULL));
	std::cout << "SCAV <" << this->_name << "> created" << std::endl;
	return; 
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SCAV <" << this->_name << "> died" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &el){
	if (this != &el)
		ClapTrap::operator=(el);
	return *this;
}

ScavTrap::ScavTrap(ScavTrap const &el) : ClapTrap(el)
{
	std::cout << "<" << el.getName() << "> created" << std::endl;
}

void ScavTrap::challengeNewcomer(FragTrap const &target)
{
	std::string challenges[]{"say \"Hello!\" and go away", "send me 5,000 rubles", "write your best joke to adm channel"};
	std::cout << "<" << this->_name << "> prepared for you, <" << target.getName() << ">, challenge: " << challenges[rand() % 3] << std::endl;
}
