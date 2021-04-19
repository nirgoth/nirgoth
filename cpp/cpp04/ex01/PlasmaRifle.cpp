#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &el) : AWeapon(el) {
	return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &el)
{
	if (this != &el)
		AWeapon::operator=(el);
	return *this;
}

PlasmaRifle::~PlasmaRifle(void) {
	return;
}

void PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
