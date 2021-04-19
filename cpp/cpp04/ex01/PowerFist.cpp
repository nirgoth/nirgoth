#include "PowerFist.hpp"
#include "AWeapon.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 8, 50){
	return;
}

PowerFist::PowerFist(PowerFist const &el) : AWeapon(el) {
	return;
}

PowerFist &PowerFist::operator=(PowerFist const &el)
{
	if (this != &el)
		AWeapon::operator=(el);
	return *this;
}

PowerFist::~PowerFist(void) {
	return;
}

void PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
