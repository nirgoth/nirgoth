#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5), FragTrap(), NinjaTrap(){
	std::cout << "Super <" << this->_name << "> created" << std::endl;
	return;
}

SuperTrap::SuperTrap(void) : ClapTrap(100, 100, 120, 120, 1, "", 60, 20, 5), FragTrap(), NinjaTrap(){
	std::cout << "Super <" << this->_name << "> created" << std::endl;
	return;
}

SuperTrap::SuperTrap(SuperTrap const &el): ClapTrap(el), FragTrap(), NinjaTrap(){
	std::cout << "Super <" << el.getName() << "> created" << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &el){
	if (this != &el)
		ClapTrap::operator=(el);
	return *this;
}

SuperTrap::~SuperTrap(void){
	std::cout << "Super <" << this->_name << "> died" << std::endl;
	return;
}



