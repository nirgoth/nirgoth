#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const &el): AMateria(el) {}

Ice &Ice::operator=(Ice const &el) {
	if (this != &el)
		AMateria::operator=(el);
	return *this;
}

Ice *Ice::clone() const { return new Ice(*this); }

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
