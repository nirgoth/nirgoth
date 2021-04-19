#include "AMateria.hpp"

AMateria::AMateria(): _xp(0) {}

AMateria::AMateria(std::string const &type): _type(type), _xp(0) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &el): _type(el.getType()), _xp(el.getXP()) {}

AMateria &AMateria::operator=(AMateria const &el) {
	this->_xp = el.getXP();
}

std::string const &AMateria::getType() const { return this->_type; }

unsigned int AMateria::getXP() const { return this->_xp; }

void AMateria::use(ICharacter &) { this->_xp += 10; }
