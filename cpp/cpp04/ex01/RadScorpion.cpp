#include "RadScorpion.hpp"
#include "Enemy.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &el) : Enemy(el) {
	return;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &el)
{
	if (this != &el)
		Enemy::operator=(el);
	return *this;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}
