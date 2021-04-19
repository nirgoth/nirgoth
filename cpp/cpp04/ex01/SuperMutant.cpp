#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &el) : Enemy(el) {
	return;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &el)
{
	if (this != &el)
		Enemy::operator=(el);
	return *this;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh..." << std::endl;
	return;
}

void SuperMutant::takeDamage(int dmg) {
	Enemy::takeDamage(dmg / 3);
	return;
}
