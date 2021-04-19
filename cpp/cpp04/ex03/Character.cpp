#include "Character.hpp"

Character::Character() {}

Character::Character(std::string name): _name(name) {}

Character::~Character() {
	for (int i = 0; i < 4; i++)
	{
		delete this->_inv[i];
		this->_inv[i] = NULL;
	}
}

Character::Character(Character const &el): _name(el.getName()) {
	for (int i = 0; i < 4; i++)
	{
		delete this->_inv[i];
		this->_inv[i] = NULL;
		if (el._inv[i])
			this->_inv[i] = el._inv[i]->clone();
	}
}

Character &Character::operator=(Character const &el) {
	if (this != &el)
	{
		this->_name = el.getName();
		for (int i = 0; i < 4; i++)
		{
			delete this->_inv[i];
			this->_inv[i] = NULL;
			if (el._inv[i])
				this->_inv[i] = el._inv[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const { return this->_name; }

void Character::equip(AMateria *m) {
	int i;

	for (i = 0; i < 4; i++)
		if (!this->_inv[i])
			break;
	if (i > 3)
		return;
	this->_inv[i] = m;
}
void Character::unequip(int idx) {
	if (idx >= 0 || idx < 4)
		this->_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return;
	if (this->_inv[idx])
		_inv[idx]->use(target);
}
