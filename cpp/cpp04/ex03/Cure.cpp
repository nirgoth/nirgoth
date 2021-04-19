#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &el): AMateria(el) {}

Cure &Cure::operator=(Cure const &el) {
	if (this != &el)
		AMateria::operator=(el);
	return *this;
}

Cure *Cure::clone() const { return new Cure(*this); }

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
