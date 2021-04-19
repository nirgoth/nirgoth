#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back..." << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &) {}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &) {
	return *this;
}

ISpaceMarine *AssaultTerminator::clone() const {
	ISpaceMarine *spaceMarine = new AssaultTerminator();
	return spaceMarine;
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
